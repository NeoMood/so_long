/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:54:00 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/22 18:48:31 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_counter(int count)
{
	char	*c;
	int		i;

	i = 0;
	c = ft_itoa(count);
	write(1, "Move Counter: ", 15);
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	free(c);
	write(1, "\n", 1);
}
