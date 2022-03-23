/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:58:08 by sgmira            #+#    #+#             */
/*   Updated: 2022/03/07 15:01:56 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	move_player(int key, void	*param)
{
	t_data	*data;

	data = (t_data *) param;
	data->x = get_x(data->map);
	data->y = get_y(data->map);
	if (key == KEY_D)
		move_right(data);
	else if (key == KEY_A)
		move_left(data);
	else if (key == KEY_W)
		move_up(data);
	else if (key == KEY_S)
		move_down(data);
	else if (key == KEY_ESC)
	{
		free_tab(data->map);
		exit(EXIT_SUCCESS);
	}
	return (0);
}

int	move_enemy(t_data *data)
{
	int		n;

	data->xe = get_enemy_x(data->map);
	data->ye = get_enemy_y(data->map);
	n = rand() % 70;
	if (n == 1)
		enemy_up(data);
	else if (n == 2)
		enemy_down(data);
	else if (n == 3)
		enemy_right(data);
	else if (n == 4)
		enemy_left(data);
	fill_map(data);
	return (0);
}

int	you_quit(void)
{
	write(1, "-------You Quit!-------", 24);
	exit(0);
}

void	*window(char	**map)
{
	t_data	data;

	data.x = get_x(map);
	data.y = get_y(map);
	data.mlx = mlx_init();
	data.mlx_win = mlx_new_window(data.mlx,
			ft_strlen(map[0]) * 60, nb_lines(map) * 60,
			"Adventure Time! (Bonus)");
	get_sprites(&data);
	data.map = map;
	data.count = 0;
	data.looper = 0;
	mlx_hook(data.mlx_win, 2, 1L << 0, move_player, &data);
	mlx_hook(data.mlx_win, 17, 0, you_quit, NULL);
	fill_map(&data);
	mlx_loop_hook(data.mlx, move_enemy, &data);
	mlx_loop(data.mlx);
	return (0);
}
