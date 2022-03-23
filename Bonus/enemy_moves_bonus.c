/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_moves_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:54:43 by sgmira            #+#    #+#             */
/*   Updated: 2022/03/07 15:02:22 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	enemy_up(t_data *data)
{
	if (data->map[data->xe - 1][data->ye] != '1'
			&& data->map[data->xe - 1][data->ye] != 'E'
			&& data->map[data->xe - 1][data->ye] != 'C'
			&& data->map[data->xe - 1][data->ye] != 'P')
	{
		data->map[data->xe][data->ye] = '0';
		data->map[data->xe - 1][data->ye] = 'X';
	}
	else if (data->map[data->xe - 1][data->ye] == 'P')
		you_lose(data);
	return (0);
}

int	enemy_down(t_data *data)
{
	if (data->map[data->xe + 1][data->ye] != '1'
		&& data->map[data->xe + 1][data->ye] != 'E'
		&& data->map[data->xe + 1][data->ye] != 'C'
		&& data->map[data->xe + 1][data->ye] != 'P')
	{
		data->map[data->xe][data->ye] = '0';
		data->map[data->xe + 1][data->ye] = 'X';
	}
	else if (data->map[data->xe + 1][data->ye] == 'P')
		you_lose(data);
	return (0);
}

int	enemy_right(t_data *data)
{
	if (data->map[data->xe][data->ye + 1] != '1'
		&& data->map[data->xe][data->ye + 1] != 'E'
		&& data->map[data->xe][data->ye + 1] != 'C'
		&& data->map[data->xe][data->ye + 1] != 'P')
	{
		data->map[data->xe][data->ye] = '0';
		data->map[data->xe][data->ye + 1] = 'X';
	}
	else if (data->map[data->xe][data->ye + 1] == 'P')
		you_lose(data);
	return (0);
}

int	enemy_left(t_data *data)
{
	if (data->map[data->xe][data->ye - 1] != '1'
		&& data->map[data->xe][data->ye - 1] != 'E'
		&& data->map[data->xe][data->ye - 1] != 'C'
		&& data->map[data->xe][data->ye - 1] != 'P')
	{
		data->map[data->xe][data->ye] = '0';
		data->map[data->xe][data->ye - 1] = 'X';
	}
	else if (data->map[data->xe][data->ye - 1] == 'P')
		you_lose(data);
	return (0);
}
