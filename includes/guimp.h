/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guimp.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:42:54 by gmachado          #+#    #+#             */
/*   Updated: 2019/10/30 14:47:31 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GUIMP_H
# define GUIMP_H

# include "libui/libui.h"
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct  s_sdl
{
    SDL_Window      *win;
    SDL_Renderer    *rend;
    SDL_Palette     *palette;
    SDL_Color       *clr;
    const Uint8     *state;
    SDL_Surface     *screen;
    SDL_Surface     *img;
}               t_sdl;

#endif