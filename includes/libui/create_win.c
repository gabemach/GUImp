/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_win.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:34:13 by gmachado          #+#    #+#             */
/*   Updated: 2019/10/29 15:00:05 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

int hold_win(int quit, SDL_Renderer *rend)
{
    SDL_Event   events;

    while (quit == 0)
    {
        SDL_RenderClear(rend);
        while (SDL_PollEvent(&events))
        {
            if (events.type == SDL_QUIT)
                quit = 1;
        }
        SDL_RenderPresent(rend);
        SDL_Delay(90);
    }
    return (quit);
}

void    *init_rend(SDL_Window *win, SDL_Renderer *rend)
{
    rend = SDL_CreateRenderer(win, -1, SDL_RENDERER_PRESENTVSYNC |
        SDL_RENDERER_TARGETTEXTURE);
    SDL_SetRenderDrawColor(rend, 100, 100, 100, 255);
    SDL_RenderClear(rend);
    return (0);
}

void  *init_win(char *name, SDL_Window *win)
{
   
    win = SDL_CreateWindow(name, SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 1080, 720,
        SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    // quit = 0;
    // hold_win(quit, rend);
    return (0);
}