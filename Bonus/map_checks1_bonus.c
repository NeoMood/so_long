/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checks1_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:56:49 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 16:06:36 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	fst_ln(char **map)
{
	int	j;

	j = 0;
	while (map[0][j])
	{
		if (map[0][j] != '1')
			return (EXIT_FAILURE);
		j++;
	}
	return (EXIT_SUCCESS);
}

int	lst_ln(char **map)
{
	int	j;

	j = 0;
	while (map[nb_lines(map) - 1][j])
	{
		if (map[nb_lines(map) - 1][j] != '1')
			return (EXIT_FAILURE);
		j++;
	}
	return (EXIT_SUCCESS);
}

int	l_side(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1')
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}

int	r_side(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(map[i]) - 1;
	while (map[i])
	{
		if (map[i][j] != '1' || map[i][j] == '\n')
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}

int	check_dimmentions(char	**map)
{
	int	i;

	i = 0;
	while (i < nb_lines(map) - 2)
	{
		if (ft_strlen(map[0]) != ft_strlen(map[i + 1]))
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
