/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:44:14 by eloren-l          #+#    #+#             */
/*   Updated: 2019/08/31 20:21:18 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

static void	initialize_context(t_context *context)
{
	SDL_Init(SDL_INIT_VIDEO);
	context->window = SDL_CreateWindow(
		"SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	context->renderer = SDL_CreateRenderer(
		context->window, -1, SDL_RENDERER_ACCELERATED);
	SDL_RenderClear(context->renderer);
}

int			main(int argc, char **argv)
{
	t_context	*context;
	(void)argc;
	(void)argv;

	context = (t_context *)malloc(sizeof(context));
	initialize_context(context);
	start_event_loop(context);
	return (0);
}
