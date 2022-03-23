/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyse_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:09:56 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/23 15:37:23 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	nb_lines(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		++i;
	return (i);
}

void	check_newline(char *rest, int j)
{
	if (rest[0] == '\n')
	{
		write(2, "There is a newline at the start of your map!", 45);
		exit(1);
	}
	if (rest[j] == '\n' && (rest[j + 1] == '\n' || rest[j + 1] == '\0'))
	{
		write(2, "There is a newline inside your map!", 36);
		exit(1);
	}
}

char	*read_map(int fd)
{
	int			i;
	int			j;
	char		*buff;
	static char	*rest;

	i = 1;
	j = -1;
	buff = malloc (2);
	if (!buff)
		return (NULL);
	while (i)
	{
		i = read(fd, buff, 1);
		if (i == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[i] = '\0';
		rest = ft_strjoin(rest, buff);
		check_newline(rest, j);
		j++;
	}
	free(buff);
	return (rest);
}

int	check_ext(char	*name)
{
	if (search_for(name, ".ber") == 0)
		return (0);
	else
		return (1);
}

int	main(int ac, char **av)
{
	char	*l;
	char	*name;
	char	**map;
	int		i;
	int		fd;

	if (ac > 2)
		exit(1);
	i = -1;
	name = av[1];
	fd = open(av[1], O_RDONLY, 0777);
	fd_protect(fd);
	l = read_map(fd);
	map = ft_split(l, '\n');
	if (fst_ln(map) == 0 && lst_ln(map) == 0 && l_side(map) == 0
		&& r_side(map) == 0 && check_dimmentions(map) == 0
		&& check_exit(map) == 0 && check_player(map) == 1
		&& check_other(map) == 0 && check_ext(name) == 0 && check_coll(map) > 0)
		window(map);
	else
	{
		get_errors(map, name);
		free_tab(map);
	}
}
