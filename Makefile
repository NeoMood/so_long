# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 19:58:02 by sgmira            #+#    #+#              #
#    Updated: 2022/02/23 16:03:17 by sgmira           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C := gcc
CFLAGS := -Wall -Werror -Wextra
LINKS := -lmlx -framework OpenGL -framework AppKit
CFILES := Mandatory/analyse_map.c \
			Mandatory/counter.c \
			Mandatory/fill_map_comp.c \
			Mandatory/fill_map.c \
			Mandatory/ft_itoa.c \
			Mandatory/get_player_position.c \
			Mandatory/get_sprites.c \
			Mandatory/map_checks1.c \
			Mandatory/map_checks2.c \
			Mandatory/my_free.c \
			Mandatory/player_moves.c \
			Mandatory/so_long_utils.c \
			Mandatory/split.c \
			Mandatory/window.c \
			Mandatory/You_win.c \
			Mandatory/get_errors.c \
			Mandatory/fd_protect.c \
						
BCFILES := Bonus/analyse_map_bonus.c \
			Bonus/animate_enemy_bonus.c \
			Bonus/enemy_moves_bonus.c \
			Bonus/fill_map_comp_bonus.c \
			Bonus/fill_map_bonus.c \
			Bonus/ft_itoa_bonus.c \
			Bonus/get_enemy_position_bonus.c \
			Bonus/get_player_position_bonus.c \
			Bonus/get_sprites_bonus.c \
			Bonus/map_checks1_bonus.c \
			Bonus/map_checks2_bonus.c \
			Bonus/my_free_bonus.c \
			Bonus/player_moves_bonus.c \
			Bonus/so_long_utils_bonus.c \
			Bonus/split_bonus.c \
			Bonus/window_bonus.c \
			Bonus/You_win_lose_bonus.c \
			Bonus/get_errors_bonus.c \
			Bonus/fd_protect_bonus.c \
 
OFILES := $(CFILES:.c=.o)
BOFILES := $(BCFILES:.c=.o)

INC := Mandatory/so_long.h
BINC := Bonus/so_long_bonus.h

NAME := so_long
BNAME := so_long_bonus
	
	
$(NAME) : $(OFILES) $(INC)
	$(CC) $(CFLAGS) $(CFILES) $(LINKS) -o $(NAME)

$(BNAME) : $(BOFILES) $(BINC)
	$(CC) $(CFLAGS) $(BCFILES) $(LINKS) -o $(BNAME)
	

all : $(NAME)

bonus : $(BNAME)
clean :
	@rm -rf $(OFILES)
	@rm -rf $(BOFILES)
fclean : clean
	@rm -rf $(NAME)
	@rm -rf $(BNAME)

re : fclean all
reb : fclean bonus