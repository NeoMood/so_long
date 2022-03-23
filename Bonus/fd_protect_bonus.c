/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_protect_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:18:27 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 16:06:15 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	fd_protect(int fd)
{
	if (fd == -1)
	{
		write(2, "invalid map file!\n", 18);
		exit(1);
	}
}
