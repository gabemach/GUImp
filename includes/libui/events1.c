/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:08:03 by gmachado          #+#    #+#             */
/*   Updated: 2019/12/12 12:16:50 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

int   open_loop(int quit, SDL_Event *event)
{
    SDL_Event   loop;

    while (SDL_PollEvent(&loop) == 1 && quit == 1)
    {
        event = &loop;
        return (0);
    }
    return (1);
}

void    close_loop(SDL_Window *win)
{
    SDL_DestroyWindow(win);
}

SDL_Event    *delay_loop(Uint32 ms, SDL_Event *event)
{
    SDL_Event   delay;

    SDL_Delay(ms);
    event = &delay;
    return (event);
}

int   quit_event(int quit, SDL_Event *event)
{
    SDL_Event   exit;

    if (exit.type == SDL_QUIT)
    {
        quit = 1;
        event = &exit;
        SDL_PushEvent(event);
        return (quit);
    }
    return (quit);
}

/*
**  Maintains and Destroys Active Windows
*/

int keep_win(int quit, SDL_Window *win, char *title, char *message)
{
    SDL_Event   exit;

    while (quit == 0)
    {
        while (SDL_PollEvent(&exit))
        {
            if (exit.type == SDL_QUIT)
            {
                SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, title,
                    message, win);
                quit = 1;
            }
            SDL_Delay(90);
        }
    }
    SDL_DestroyWindow(win);
    return (quit);
}

/*
**  Deinitializes all initialized subsystems
*/

void    quit_sdl(void)
{
    SDL_Quit();
}