/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:38:42 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/26 20:59:16 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		check;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	check = (unsigned char)c;
	while (n != 0 && *s != check)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	if (n != 0 && *s == check)
	{
		*d = *s;
		return (d + 1);
	}
	return (NULL);
}
