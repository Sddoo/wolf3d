/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:24:32 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/26 17:26:40 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int count;

	if (s == NULL || f == NULL)
		return ;
	count = 0;
	while (*s != 0)
	{
		f(count, s);
		count++;
		s++;
	}
}
