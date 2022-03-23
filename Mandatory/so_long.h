/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:00:28 by sgmira            #+#    #+#             */
/*   Updated: 2022/02/25 15:20:32 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define  SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <mlx.h>

typedef struct s_data
{
	void	*img;
	void	*img1;
	void	*img2;
	void	*img3;
	void	*img4;
	void	*mlx;
	void	*mlx_win;
	int		width;
	int		height;
	int		back_width;
	int		back_height;
	int		i;
	int		j;
	int		x;
	int		y;
	char	**map;
	int		count;
}				t_data;

# define KEY_W 13 
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_ESC 53

char	*ft_strjoin(char	*s1, char	*s2);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
int		search_for(char *str, char *to_find);
void	*window(char	**map);
int		nb_lines(char **map);
int		get_x(char	**map);
int		get_y(char	**map);
void	fill_map(t_data *data);
int		check_coll(char	**map);
char	*ft_itoa(int n);
void	ft_counter(int count);
int		my_free(void *to_free);
void	free_tab(char **tab);
int		fst_ln(char **map);
int		lst_ln(char **map);
int		l_side(char **map);
int		r_side(char **map);
int		check_dimmentions(char **map);
int		check_exit(char	**map);
int		check_other(char	**map);
int		check_player(char	**map);
int		check_coll(char	**map);
int		check_ext(char	*name);
int		move_right(t_data *data);
int		move_left(t_data *data);
int		move_up(t_data *data);
int		move_down(t_data *data);
void	get_sprites(t_data	*data);
void	you_win(t_data *data);
void	you_lose(t_data *data);
void	put_imgs(t_data *data);
void	get_errors(char **map, char *name);
void	fd_protect(int fd);

#endif
