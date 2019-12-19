/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:24:02 by gmachado          #+#    #+#             */
/*   Updated: 2019/12/12 12:09:53 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

const Uint8     *get_keystate(void)
{
    const Uint8 *state;

    state = SDL_GetKeyboardState(NULL);
    return (state);
}