/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:23:36 by gmachado          #+#    #+#             */
/*   Updated: 2019/11/08 15:55:23 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

SDL_Event   *mouse_move(void)
{
    SDL_Event   *mouse;

    mouse = NULL;
    if (mouse->type == SDL_MOUSEMOTION)
        SDL_GetMouseState(NULL, NULL);
    return (mouse);
}