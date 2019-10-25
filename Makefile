# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/24 14:03:41 by gmachado          #+#    #+#              #
#    Updated: 2019/10/24 16:24:10 by gmachado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = GUImp

CFLAGS = `sdl2-config --libs --cflags` -ggdb3 -O0 --std=c99 -Wall -lSDL2_image -lm

HDRS =

INCLUDE = 	\
			-I Frameworks/SDL2.framework/Versions/A/Headers \
			-I Frameworks/SDL2_image.framework/Versions/A/Headers \
			-I Frameworks/SDL2_ttf.framework/Versions/A/Headers \
			-I Frameworks/SDL2_mixer.framework/Versions/A/Headers \
			-F Frameworks/

SRCS = sdltest.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRCS)
	gcc $(CFLAGS) -o $(OBJS) -c $(SRCS)
	gcc $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all