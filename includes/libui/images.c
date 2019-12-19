/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:59:20 by gmachado          #+#    #+#             */
/*   Updated: 2019/12/12 13:55:58 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

/*
**  Initializes and displays .png to surface
*/

// SDL_Surface *init_png(SDL_Window *win, SDL_Surface *surface, SDL_Rect *rect,
//                         char *file)
// {
//     SDL_Surface *img;

//     img = IMG_Load(file);
//     if (img == NULL)
//         ft_printf("IMG_Load: %s\n", IMG_GetError());
//     SDL_BlitSurface(img, NULL, surface, rect);
//     SDL_UpdateWindowSurface(win);
//     return (img);
// }

/*
**  Initializes and displays .bmp to surface
*/

SDL_Surface *init_bmp(SDL_Window *win, SDL_Surface *surface, char *file)
{
    SDL_Surface     *img;

    img = SDL_LoadBMP(file);
    if (img == NULL)
        ft_printf( "Unable to load image %s! SDL Error: %s\n", file, SDL_GetError());
    SDL_BlitSurface(img, NULL, surface, NULL);
    SDL_UpdateWindowSurface(win);
    return (img);
}

/*
**  Creates texture from surface image
*/

SDL_Texture *create_texture(SDL_Renderer *rend, SDL_Surface *surface)
{
    SDL_Texture *texture;
    texture = SDL_CreateTextureFromSurface(rend, surface);
    return (texture);               
}