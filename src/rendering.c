/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:33:22 by eloren-l          #+#    #+#             */
/*   Updated: 2019/08/31 20:20:21 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

/* 
** splitting line drawing into separate function might decrease performance
** consider testing performance impact with separate function for lines
*/
void	render_square(SDL_Renderer *renderer,
	t_point *upper_left, t_point *bottom_right, t_color *color)
{
	uint_fast16_t x;
	uint_fast16_t y;

	SDL_SetRenderDrawColor(renderer, color->r, color->g, color->b, color->a);
	y = upper_left->y;
	while (y <= bottom_right->y)
	{
		x = upper_left->x;
		while (x <= bottom_right->x)
		{
			SDL_RenderDrawPoint(renderer, x, y);
			x++;
		}
		y++;
	}
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
}
