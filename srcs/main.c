/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:11:48 by gmachado          #+#    #+#             */
/*   Updated: 2019/10/30 15:43:34 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/guimp.h"

int hold_win(int quit, t_sdl *sdl)
{
    SDL_Event   events;

    while (quit == 0)
    {
//        SDL_RenderClear(sdl->rend);

        while (SDL_PollEvent(&events))
        {
            // sdl->state = SDL_GetKeyboardState(NULL);
            // if (sdl->state[SDL_SCANCODE_RIGHT])
            //     ft_printf("Right key pressed.\n");
            if (events.type == SDL_QUIT)
            {
                SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Program Shutdown", "Goodbye!", sdl->win);
                quit = 1;
            }
//            SDL_RenderPresent(sdl->rend);
//            SDL_UpdateWindowSurface(sdl->win);
            SDL_Delay(90);
        }
    }
    return (quit);
}

void        win_shutdown(t_sdl *sdl)
{
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Program Shutdown", "Goodbye!", sdl->win);
    SDL_Delay(500);
}

t_sdl       init_sdl(t_sdl *sdl)
{

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        ft_printf("Window initialization error!\n");
    sdl->win = init_win("GUImp", sdl->win);
    sdl->screen = SDL_GetWindowSurface(sdl->win);
    sdl->img = SDL_LoadBMP("rhymdpvbbik31.bmp");
    if (sdl->img == NULL)
        ft_printf( "Unable to load image %s! SDL Error: %s\n", "rhymdpvbbik31.bmp", SDL_GetError());
    SDL_BlitSurface(sdl->img, NULL, sdl->screen, NULL);
    SDL_UpdateWindowSurface(sdl->win);
//    sdl->rend = init_rend(sdl->win, sdl->rend);
    return (*sdl);
}

int     main(void)
{
    t_sdl   sdl;
    int     quit;

    quit = 0;
    init_sdl(&sdl);
    hold_win(quit, &sdl);
    if (quit == 1)
        SDL_Quit();
    return (0);
}