/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:35:14 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 15:43:45 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_errors(char **map, char *name)
{
	if (fst_ln(map) == 1)
		write(2, "First line of the map is not valid!\n", 37);
	else if (lst_ln(map) == 1)
		write(2, "last line of the map is not valid!\n", 36);
	else if (l_side(map) == 1)
		write(2, "left side of the map is not valid!\n", 36);
	else if (check_dimmentions(map) == 1 && r_side(map) == 1)
		write(2, "map dimmentions are not valid\n", 31);
	else if (r_side(map) == 1)
		write(2, "right side of the map is not valid!\n", 37);
	else if (check_exit(map) == 1)
		write(2, "thare is no exit in your map\n", 30);
	else if (check_player(map) != 1)
		write(2, "there is no player or more than 1 in your map\n", 47);
	else if (check_other(map) > 0)
		write(2, "there is a non valid symbol in your map\n", 41);
	else if (check_ext(name) == 1)
		write(2, "map extention is not valid", 30);
	else if (check_coll(map) == 0)
		write(2, "there are no collectibles in your map", 30);
}
