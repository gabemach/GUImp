# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 13:26:38 by gmachado          #+#    #+#              #
#    Updated: 2019/11/05 15:19:57 by gmachado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libui.a

CFILES = *.c

OFILES = $(CFILES:.c=.o)

CFLAGS = `sdl2-config --cflags` -ggdb3 -O0 --std=c99 -Wall -c

INCLUDES = \
	-L ../libft\
	-L ../ft_printf \
	-I ../../Frameworks/SDL2.framework/Versions/A/Headers \
	-I ../../Frameworks/SDL2_image.framework/Versions/A/Headers \
	-I ../../Frameworks/SDL2_ttf.framework/Versions/A/Headers \
	-I ../../Frameworks/SDL2_mixer.framework/Versions/A/Headers \
	-F ../../Frameworks/ \

HEADER = \
	-I libui.h

all: $(NAME)

$(NAME): $(CFILES)
	@	gcc $(CFLAGS) -I ../../Frameworks/SDL2.framework/Headers/SDL.h $(CFILES)
	@	ar rc $(NAME) $(OFILES)
	@	ranlib $(NAME)

clean:
	@	rm -f $(OFILES)

fclean: clean
	@	rm -f $(NAME)

re: fclean all