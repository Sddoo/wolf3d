/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 21:39:20 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:42:13 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s1_ch;
	const unsigned char *s2_ch;

	s1_ch = (const unsigned char *)s1;
	s2_ch = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*s1_ch != *s2_ch)
			return (*s1_ch - *s2_ch);
		s1_ch++;
		s2_ch++;
		n--;
	}
	return (0);
}
