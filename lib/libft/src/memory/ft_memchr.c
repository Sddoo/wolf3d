/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 21:16:58 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:42:38 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		check;
	const unsigned char	*s_ch;

	s_ch = (const unsigned char *)s;
	check = (unsigned char)c;
	while (n > 0 && *s_ch != check)
	{
		s_ch++;
		n--;
	}
	if (n == 0)
		return (NULL);
	else
		return ((void *)s_ch);
}
