/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libui.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:23:04 by gmachado          #+#    #+#             */
/*   Updated: 2019/12/12 16:16:16 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUI_H
# define LIBUI_H

# include "SDL.h"
# include "SDL_image.h"
# include "SDL_timer.h"
# include "SDL_ttf.h"
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

void            initializer(void);
SDL_Window      *init_win(char *name);
SDL_Renderer    *init_rend(SDL_Window *win, int r, int g, int b, int opacity);
SDL_Surface     *init_surface(SDL_Window *win);
SDL_Surface     *init_bmp(SDL_Window *win, SDL_Surface *surface, char *file);
int             keep_win(int quit, SDL_Window *win, char *title, char *message);
void            quit_sdl(void);
void            fill_rect(SDL_Surface *surface, SDL_Window *win, Uint8 r,
                    Uint8 g, Uint8 b);
const Uint8     *get_keystate(void);
int             open_loop(int quit, SDL_Event *event);
void            close_loop(SDL_Window *win);
SDL_Event       *delay_loop(Uint32 ms, SDL_Event *event);
int             quit_event(int quit, SDL_Event *event);
SDL_Event       *mouse_move(void);

#endif