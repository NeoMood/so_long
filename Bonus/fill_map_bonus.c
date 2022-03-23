/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:03:33 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 16:06:17 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	fill_map(t_data *data)
{
	char	*c;

	c = ft_itoa(data->count);
	data->i = 0;
	while (data->map[data->i])
	{
		data->j = 0;
		while (data->map[data->i][data->j])
		{
			put_imgs(data);
			data->j++;
		}
		data->i++;
	}
	mlx_string_put(data->mlx, data->mlx_win, 0, 0, 16777215, "Move Counter: ");
	mlx_string_put(data->mlx, data->mlx_win, 140, 0, 16777215, c);
	free(c);
}
