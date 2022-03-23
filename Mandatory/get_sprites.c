/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprites.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:15:17 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 17:24:12 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_sprites(t_data	*data)
{
	data->img = mlx_xpm_file_to_image(data->mlx,
			"./Mandatory/sprites/box.xpm", &data->width, &data->height);
	data->img1 = mlx_xpm_file_to_image(data->mlx,
			"./Mandatory/sprites/grass.xpm",
			&data->back_width, &data->back_height);
	data->img2 = mlx_xpm_file_to_image(data->mlx,
			"./Mandatory/sprites/finn.xpm",
			&data->back_width, &data->back_height);
	data->img3 = mlx_xpm_file_to_image(data->mlx,
			"./Mandatory/sprites/BMO.xpm",
			&data->back_width, &data->back_height);
	data->img4 = mlx_xpm_file_to_image(data->mlx,
			"./Mandatory/sprites/exit closed.xpm",
			&data->back_width, &data->back_height);
}
