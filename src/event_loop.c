/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_loop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:10:01 by eloren-l          #+#    #+#             */
/*   Updated: 2019/08/31 20:21:08 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

static void terminate_program(t_context *context)
{
	SDL_DestroyRenderer(context->renderer);
	SDL_DestroyWindow(context->window);
	free(context);
	exit(0);
}

void        start_event_loop(t_context *context)
{
	SDL_Event	event;
    
    t_point left = (t_point){500, 500};
    t_point right = (t_point){600, 600};
    t_color color = (t_color){255, 255, 0, 0};

	while (true)
	{
		while (SDL_PollEvent(&event) != 0)
		{
			if (check_for_termination_event(&event))
				terminate_program(context);
		}
        render_square(context->renderer, &left,&right, &color);
        printf("test\n");
        SDL_RenderPresent(context->renderer);
        SDL_RenderClear(context->renderer);
		SDL_Delay(100);
	}
}