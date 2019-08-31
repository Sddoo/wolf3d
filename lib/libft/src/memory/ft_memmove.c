/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 20:44:53 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:39:13 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				check;
	unsigned char	*dst_c;
	unsigned char	*src_c;
	unsigned char	buff;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	check = (int)len;
	if (src == dst)
		return (dst);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (check > 0)
		{
			check--;
			buff = src_c[check];
			dst_c[check] = buff;
		}
	}
	return (dst);
}
