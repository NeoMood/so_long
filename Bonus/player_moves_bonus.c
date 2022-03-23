/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:10:13 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 17:30:05 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	move_right(t_data *data)
{
	if (data->map[data->x][data->y + 1] != '1'
	&& data->map[data->x][data->y + 1] != 'E' &&
	data->map[data->x][data->y + 1] != 'X')
	{
		data->map[data->x][data->y] = '0';
		data->map[data->x][data->y + 1] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx,
				"./Bonus/sprites/Finn.xpm",
				&data->back_width, &data->back_height);
		data->count++;
	}
	else if (data->map[data->x][data->y + 1] == 'E'
	&& check_coll(data->map) == 0)
		you_win(data);
	else if (data->map[data->x][data->y + 1] == 'X')
		you_lose(data);
	if (!check_coll(data->map))
		data->img4 = mlx_xpm_file_to_image(data->mlx,
				"./Bonus/sprites/exit opened.xpm",
				&data->back_width, &data->back_height);
	fill_map(data);
	return (data->count);
}

int	move_left(t_data *data)
{
	if (data->map[data->x][data->y - 1] != '1' &&
	data->map[data->x][data->y - 1] != 'E' &&
	data->map[data->x][data->y - 1] != 'X')
	{
		data->map[data->x][data->y] = '0';
		data->map[data->x][data->y - 1] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx,
				"./Bonus/sprites/Finn2.xpm",
				&data->back_width, &data->back_height);
		data->count++;
	}
	else if (data->map[data->x][data->y - 1] == 'E'
	&& check_coll(data->map) == 0)
		you_win(data);
	else if (data->map[data->x][data->y - 1] == 'X')
		you_lose(data);
	if (!check_coll(data->map))
		data->img4 = mlx_xpm_file_to_image(data->mlx,
				"./Bonus/sprites/exit opened.xpm", &data->back_width,
				&data->back_height);
	fill_map(data);
	return (data->count);
}

int	move_up(t_data *data)
{
	if (data->map[data->x - 1][data->y] != '1'
			&& data->map[data->x - 1][data->y] != 'E'
			&& data->map[data->x - 1][data->y] != 'X')
	{
		data->map[data->x][data->y] = '0';
		data->map[data->x - 1][data->y] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx,
				"./Bonus/sprites/Finnback.xpm",
				&data->back_width, &data->back_height);
		data->count++;
	}
	else if (data->map[data->x - 1][data->y] == 'E'
			&& check_coll(data->map) == 0)
		you_win(data);
	else if (data->map[data->x - 1][data->y] == 'X')
		you_lose(data);
	if (!check_coll(data->map))
		data->img4 = mlx_xpm_file_to_image(data->mlx,
				"./Bonus/sprites/exit opened.xpm", &data->back_width,
				&data->back_height);
	fill_map(data);
	return (data->count);
}

int	move_down(t_data *data)
{
	if (data->map[data->x + 1][data->y] != '1' &&
			data->map[data->x + 1][data->y] != 'E' &&
			data->map[data->x + 1][data->y] != 'X')
	{
		data->map[data->x][data->y] = '0';
		data->map[data->x + 1][data->y] = 'P';
		data->img2 = mlx_xpm_file_to_image(data->mlx,
				"./Bonus/sprites/Finn.xpm",
				&data->back_width, &data->back_height);
		data->count++;
	}
	else if (data->map[data->x + 1][data->y] == 'E'
			&& check_coll(data->map) == 0)
		you_win(data);
	else if (data->map[data->x + 1][data->y] == 'X')
		you_lose(data);
	if (!check_coll(data->map))
		data->img4 = mlx_xpm_file_to_image(data->mlx,
				"./Bonus/sprites/exit opened.xpm", &data->back_width,
				&data->back_height);
	fill_map(data);
	return (data->count);
}
