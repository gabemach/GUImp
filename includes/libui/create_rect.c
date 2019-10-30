/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_rect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:17:40 by gmachado          #+#    #+#             */
/*   Updated: 2019/10/30 14:21:03 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

int init_rect(SDL_Rect *rect, int x, int y, int w, int h)
{
    rect->x = x;
    rect->y = y;
    rect->w = w;
    rect->h = h;
    return (0);
}