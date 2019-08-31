/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   termination_event.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:15:14 by eloren-l          #+#    #+#             */
/*   Updated: 2019/08/31 20:03:29 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

bool        check_for_termination_event(SDL_Event *event)
{
	if ((event->type == SDL_KEYDOWN && event->key.keysym.sym == SDLK_ESCAPE)
		||
		event->type == SDL_QUIT)
		return (true);
	return (false);
}