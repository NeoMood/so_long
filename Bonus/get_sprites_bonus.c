/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprites_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:15:17 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 17:28:52 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	get_sprites(t_data	*data)
{
	data->img = mlx_xpm_file_to_image(data->mlx,
			"./Bonus/sprites/box.xpm", &data->width, &data->height);
	data->img1 = mlx_xpm_file_to_image(data->mlx,
			"./Bonus/sprites/grass.xpm", &data->back_width, &data->back_height);
	data->img2 = mlx_xpm_file_to_image(data->mlx,
			"./Bonus/sprites/finn.xpm", &data->back_width, &data->back_height);
	data->img3 = mlx_xpm_file_to_image(data->mlx,
			"./Bonus/sprites/BMO.xpm", &data->back_width, &data->back_height);
	data->img4 = mlx_xpm_file_to_image(data->mlx,
			"./Bonus/sprites/exit closed.xpm",
			&data->back_width, &data->back_height);
	data->wizard1 = mlx_xpm_file_to_image(data->mlx,
			"./Bonus/sprites/wizard1.xpm",
			&data->back_width, &data->back_height);
	data->wizard2 = mlx_xpm_file_to_image(data->mlx,
			"./Bonus/sprites/wizard2.xpm",
			&data->back_width, &data->back_height);
	data->wizard3 = mlx_xpm_file_to_image(data->mlx,
			"./Bonus/sprites/wizard3.xpm",
			&data->back_width, &data->back_height);
	data->wizard4 = mlx_xpm_file_to_image(data->mlx,
			"./Bonus/sprites/wizard4.xpm",
			&data->back_width, &data->back_height);
}
