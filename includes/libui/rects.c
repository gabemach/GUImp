/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rects.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:17:40 by gmachado          #+#    #+#             */
/*   Updated: 2019/12/12 12:38:39 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

/*
**  Initializes rectangle dimensions
*/

SDL_Rect        *init_rect(int x, int y, int w, int h)
{
    SDL_Rect    *rect;

    rect = NULL;
    rect->x = x;
    rect->y = y;
    rect->w = w;
    rect->h = h;
    return (rect);
}

/*
**  Fills window
*/

void    fill_rect(SDL_Surface *surface, SDL_Window *win, Uint8 r,
                            Uint8 g, Uint8 b)
{
    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, r, g, b));
    SDL_UpdateWindowSurface(win);
}