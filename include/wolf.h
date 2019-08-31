/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:22:05 by eloren-l          #+#    #+#             */
/*   Updated: 2019/08/31 18:21:32 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H

# include <stdint.h>
# include <stdbool.h>
# include "SDL2/SDL.h"

# define SCREEN_WIDTH 1600
# define SCREEN_HEIGHT 900

typedef struct	s_context
{
	SDL_Window		*window;
	SDL_Renderer	*renderer;
}				t_context;

typedef struct	s_color
{
	uint8_t		r;
	uint8_t		g;
	uint8_t		b;
	uint8_t		a;
}				t_color;

typedef struct	s_point
{
	int16_t		x;
	int16_t		y;
}				t_point;

/*
** event related functions
*/
void			start_event_loop(t_context *context);
bool			check_for_termination_event(SDL_Event *event);

#endif
