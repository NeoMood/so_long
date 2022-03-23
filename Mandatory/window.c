/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:58:08 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 17:26:44 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
			"Adventure Time! (Mandatory)");
	get_sprites(&data);
	data.map = map;
	data.count = 0;
	mlx_hook(data.mlx_win, 2, 1L << 0, move_player, &data);
	mlx_hook(data.mlx_win, 17, 0, you_quit, NULL);
	fill_map(&data);
	mlx_loop(data.mlx);
	return (0);
}
