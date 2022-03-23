/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:10:13 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 17:23:41 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_right(t_data *data)
{
	if (data->map[data->x][data->y + 1] != '1'
	&& data->map[data->x][data->y + 1] != 'E')
	{
		data->map[data->x][data->y] = '0';
		data->map[data->x][data->y + 1] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx,
				"./Mandatory/sprites/Finn.xpm",
				&data->back_width, &data->back_height);
		data->count++;
		ft_counter(data->count);
	}
	else if (data->map[data->x][data->y + 1] == 'E'
	&& check_coll(data->map) == 0)
		you_win(data);
	if (!check_coll(data->map))
		data->img4 = mlx_xpm_file_to_image(data->mlx,
				"./Mandatory/sprites/exit opened.xpm",
				&data->back_width, &data->back_height);
	fill_map(data);
	return (data->count);
}

int	move_left(t_data *data)
{
	if (data->map[data->x][data->y - 1] != '1' &&
	data->map[data->x][data->y - 1] != 'E')
	{
		data->map[data->x][data->y] = '0';
		data->map[data->x][data->y - 1] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx,
				"./Mandatory/sprites/Finn2.xpm",
				&data->back_width, &data->back_height);
		data->count++;
		ft_counter(data->count);
	}
	else if (data->map[data->x][data->y - 1] == 'E'
	&& check_coll(data->map) == 0)
		you_win(data);
	if (!check_coll(data->map))
		data->img4 = mlx_xpm_file_to_image(data->mlx,
				"./Mandatory/sprites/exit opened.xpm", &data->back_width,
				&data->back_height);
	fill_map(data);
	return (data->count);
}

int	move_up(t_data *data)
{
	if (data->map[data->x - 1][data->y] != '1'
			&& data->map[data->x - 1][data->y] != 'E')
	{
		data->map[data->x][data->y] = '0';
		data->map[data->x - 1][data->y] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx,
				"./Mandatory/sprites/Finnback.xpm",
				&data->back_width, &data->back_height);
		data->count++;
		ft_counter(data->count);
	}
	else if (data->map[data->x - 1][data->y] == 'E'
			&& check_coll(data->map) == 0)
		you_win(data);
	if (!check_coll(data->map))
		data->img4 = mlx_xpm_file_to_image(data->mlx,
				"./Mandatory/sprites/exit opened.xpm", &data->back_width,
				&data->back_height);
	fill_map(data);
	return (data->count);
}

int	move_down(t_data *data)
{
	if (data->map[data->x + 1][data->y] != '1' &&
			data->map[data->x + 1][data->y] != 'E')
	{
		data->map[data->x][data->y] = '0';
		data->map[data->x + 1][data->y] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx,
				"./Mandatory/sprites/Finn.xpm",
				&data->back_width, &data->back_height);
		data->count++;
		ft_counter(data->count);
	}
	else if (data->map[data->x + 1][data->y] == 'E'
			&& check_coll(data->map) == 0)
		you_win(data);
	if (!check_coll(data->map))
		data->img4 = mlx_xpm_file_to_image(data->mlx,
				"./Mandatory/sprites/exit opened.xpm", &data->back_width,
				&data->back_height);
	fill_map(data);
	return (data->count);
}
