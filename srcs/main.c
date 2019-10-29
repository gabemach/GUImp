/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:11:48 by gmachado          #+#    #+#             */
/*   Updated: 2019/10/29 15:02:35 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/guimp.h"

t_sdl    init_sdl(t_sdl *sdl)
{

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        ft_printf("Window initialization error!\n");
    sdl->win = init_win("GUImp", sdl->win);
    sdl->rend = init_rend(sdl->win, sdl->rend);
    return (*sdl);
}

int     main(void)
{
    t_sdl   sdl;
    int     quit;

    quit = 0;
    init_sdl(&sdl);
    hold_win(quit, sdl.rend);
//    basic_win("GUImp");
    if (quit == 1)
        SDL_Quit();
    return (0);
}