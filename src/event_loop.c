/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_loop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:10:01 by eloren-l          #+#    #+#             */
/*   Updated: 2019/08/31 18:10:11 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

static void	terminate_program(t_context *context)
{
	SDL_DestroyWindow(context->window);
	free(context);
	exit(0);
}

static bool	check_for_termination_event(SDL_Event *event)
{
	if ((event->type == SDL_KEYDOWN && event->key.keysym.sym == SDLK_ESCAPE)
		||
		event->type == SDL_QUIT)
		return (true);
	return (false);
}

static void	start_event_loop(t_context *context)
{
	SDL_Event	*event;

	while (true)
	{
		while (SDL_PollEvent(event) != 0)
		{
			if (check_for_termination_event(event))
				terminate_program(context);
		}
		SDL_Delay(10);
	}
}