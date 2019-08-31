/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:28:29 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:32:54 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*src_st;
	size_t		len;
	int			end_size;

	src_st = src;
	len = ft_strlen(dst);
	end_size = size - len - 1;
	if (len > size)
		return (size + ft_strlen(src));
	dst = dst + len;
	while (end_size > 0 && *src != 0)
	{
		*dst = *src;
		dst++;
		src++;
		end_size--;
	}
	*dst = 0;
	return (len + ft_strlen(src_st));
}
