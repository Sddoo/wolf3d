/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:44:14 by eloren-l          #+#    #+#             */
/*   Updated: 2019/08/31 15:31:30 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 800

int asd();

static void	sdl_test(void)
{
	SDL_Event	event;
	int		quit;

	quit = 0;
	SDL_Window* gWindow;
	SDL_Init(SDL_INIT_VIDEO);
	gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);	
	while (!quit)
	{
		SDL_Delay(10);
		while (SDL_PollEvent(&event) != 0)
		{
			if ((event.type == SDL_KEYDOWN &&
				event.key.keysym.sym == SDLK_ESCAPE) || event.type == SDL_QUIT)
				quit = 1;
		}
	}
	SDL_Quit();
	exit(0);
}

int		main()
{
	sdl_test();
	return (0);
}
