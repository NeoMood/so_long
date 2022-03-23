/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map_comp_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:59:54 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 16:06:20 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	put_imgs(t_data *data)
{
	if (data->map[data->i][data->j] == '1')
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->img, data->j * data->height, data->i * data->width);
	else if (data->map[data->i][data->j] == '0')
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->img1, data->j * data->height, data->i * data->width);
	else if (data->map[data->i][data->j] == 'P')
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->img2, data->j * data->height, data->i * data->width);
	else if (data->map[data->i][data->j] == 'C')
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->img3, data->j * data->height, data->i * data->width);
	else if (data->map[data->i][data->j] == 'E')
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->img4, data->j * data->height, data->i * data->width);
	else if (data->map[data->i][data->j] == 'X')
		animate_enemy(data);
}
