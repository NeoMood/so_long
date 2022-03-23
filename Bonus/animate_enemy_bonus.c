/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animate_enemy_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:15:40 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 16:06:07 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	animate_enemy(t_data *data)
{
	if (data->looper <= 10)
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->wizard1, data->j * data->height, data->i * data->width);
	else if (data->looper >= 10 && data->looper <= 20)
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->wizard2, data->j * data->height, data->i * data->width);
	else if (data->looper >= 20 && data->looper <= 30)
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->wizard3, data->j * data->height, data->i * data->width);
	else if (data->looper >= 30 && data->looper < 40)
		mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->wizard4, data->j * data->height, data->i * data->width);
	else if (data->looper == 40)
		data->looper = 0;
	data->looper++;
	return (0);
}
