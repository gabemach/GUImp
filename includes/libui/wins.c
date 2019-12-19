/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wins.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:34:13 by gmachado          #+#    #+#             */
/*   Updated: 2019/12/12 16:15:16 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

void            initializer()
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        ft_printf("SDL initialization error: %s\n", SDL_GetError());
}

/*
**  Initializes Drawing Surface
*/

SDL_Surface     *init_surface(SDL_Window *win)
{
    SDL_Surface     *surface;

    surface = SDL_GetWindowSurface(win);
    return (surface);
}

/*
**  Initializes Window
*/

SDL_Window  *init_win(char *name)
{
    SDL_Window  *win;
    
    win = SDL_CreateWindow(name, SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 1080, 720,
        SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    if (win == NULL)
    {
        ft_printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_Quit();
    }
    return (win);
}
