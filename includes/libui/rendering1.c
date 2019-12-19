/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 13:56:57 by gmachado          #+#    #+#             */
/*   Updated: 2019/12/12 16:16:35 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

/*
**  Initializes Color Rendering
*/

SDL_Renderer    *init_rend(SDL_Window *win, int r, int g, int b, int opacity)
{
    SDL_Renderer    *rend;

    rend = SDL_CreateRenderer(win, -1, SDL_RENDERER_PRESENTVSYNC |
        SDL_RENDERER_TARGETTEXTURE);
    SDL_SetRenderDrawColor(rend, r, g, b, opacity);
    SDL_RenderClear(rend);
    return (rend);
}

/*
//  Draws Lines and Points
*/

void    draw_lineorpoint(SDL_Renderer *rend, int x0, int y0, int x1, int y1)
{
    if (x1 && y1)
        SDL_RenderDrawLine(rend, x0, y0, x1, y1);
    else
        SDL_DrawPoint(rend, x0, y0);
}