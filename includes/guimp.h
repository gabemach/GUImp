/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guimp.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:42:54 by gmachado          #+#    #+#             */
/*   Updated: 2019/10/29 14:34:45 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GUIMP_H
# define GUIMP_H

# include "libui/libui.h"
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct  s_sdl
{
    SDL_Window      *win;
    SDL_Renderer    *rend;
}               t_sdl;

#endif