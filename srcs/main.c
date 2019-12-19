/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:11:48 by gmachado          #+#    #+#             */
/*   Updated: 2019/12/12 16:17:08 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/guimp.h"

int hold_win(int quit, t_sdl *sdl)
{
    SDL_Event   events;

    while (quit == 0)
    {
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

void       init_sdl(t_sdl *sdl)
{
    sdl->win = NULL;
    // if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    //     ft_printf("Window initialization error!\n");
    initializer();
    sdl->win = init_win("GUImp");
//    sdl->rend = init_rend(sdl->win, 100, 100, 100, 255);
    sdl->screen = init_surface(sdl->win);
    //sdl->srcrect = init_rect(WIDTH * .25, HEIGHT * .25, )
    fill_rect(sdl->screen, sdl->win, 255, 255, 255);
    sdl->img = init_bmp(sdl->win, sdl->screen, "./resources/images/chanka.bmp");
    sdl->events = NULL;
    sdl->state = NULL;
}

int     main(void)
{
    t_sdl   *sdl;
    int     quit;

    quit = 0;
    if (!(sdl = (t_sdl *)malloc(sizeof(t_sdl))))
        return (-1);
    init_sdl(sdl);
    while (open_loop(quit, sdl->events) == 1)
    {
        sdl->events = delay_loop(90, sdl->events);
        quit = quit_event(quit, sdl->events);
        sdl->state = get_keystate();
        if (sdl->state[SDL_SCANCODE_DOWN])
            printf("Down key pressed\n");
        if (sdl->state[SDL_SCANCODE_UP] && sdl->state[SDL_SCANCODE_DOWN])
            printf("Up and Down\n");
        if (sdl->state[SDL_SCANCODE_ESCAPE])
            quit = 1;
    }
    close_loop(sdl->win);
    free(sdl);
    return (0);
}