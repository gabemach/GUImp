# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/24 14:03:41 by gmachado          #+#    #+#              #
#    Updated: 2019/10/30 13:21:40 by gmachado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = GUImp

CFLAGS =  -ggdb3 -O0 --std=c99 -Wall

HDRS =	\
		-I ./includes/guimp.h 

INCLUDE = 	\
			-I ./Frameworks/SDL2.framework/Versions/A/Headers \
			-I ./Frameworks/SDL2_image.framework/Versions/A/Headers \
			-I ./Frameworks/SDL2_ttf.framework/Versions/A/Headers \
			-I ./Frameworks/SDL2_mixer.framework/Versions/A/Headers \
			-F ./Frameworks/

ARCHIVE = \
		-L includes/libft -l ft \
 		-L includes/ft_printf -l ftprintf \
 		-L includes/libui -l ui

SRCS = \
	srcs/main.c 
#	sdltest.c \


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make -C includes/libft
	make -C includes/ft_printf
	make -C includes/libui
	@	gcc $(CFLAGS) `sdl2-config --libs --cflags` -o $(NAME) $(ARCHIVE) $(SRCS) $(INCLUDE)

clean:
	make -C ./includes/libft clean
	make -C ./includes/ft_printf clean
	make -C ./includes/libui clean
	@	rm -f $(OBJS)

fclean: clean
	make -C ./includes/libft fclean
	make -C ./includes/ft_printf fclean
	make -C ./includes/libui fclean
	@	rm -f $(NAME)

re: fclean all

# GUImp:
# 	gcc $(CFLAGS) $(HDRS) -o $(OBJS) -c $(SRCS)
# 	gcc $(CFLAGS) -o $(NAME) $(OBJS)