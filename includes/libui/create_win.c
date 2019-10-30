/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_win.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:34:13 by gmachado          #+#    #+#             */
/*   Updated: 2019/10/30 14:09:15 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

/*
**  Initializes Rendering
*/

void    *init_rend(SDL_Window *win, SDL_Renderer *rend)
{
    rend = SDL_CreateRenderer(win, -1, SDL_RENDERER_PRESENTVSYNC |
        SDL_RENDERER_TARGETTEXTURE);
    SDL_SetRenderDrawColor(rend, 255, 0, 0, 100);
//    SDL_RenderClear(rend);
    return (0);
}

/*
**  Initializes Window
*/

void  *init_win(char *name, SDL_Window *win)
{
    win = SDL_CreateWindow(name, SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 1080, 720,
        SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    return (0);
}