/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   You_win_lose.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:37:32 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 15:41:10 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	you_win(t_data *data)
{
	write (1, "-------You Win!-------", 23);
	free_tab(data->map);
	exit(EXIT_SUCCESS);
}