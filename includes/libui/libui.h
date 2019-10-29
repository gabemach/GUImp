/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libui.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:23:04 by gmachado          #+#    #+#             */
/*   Updated: 2019/10/29 15:02:54 by gmachado         ###   ########.fr       */
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

void    *init_win(char *name, SDL_Window *win);
void    *init_rend(SDL_Window *win, SDL_Renderer *rend);
int     hold_win(int quit, SDL_Renderer *rend);

#endif