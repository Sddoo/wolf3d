/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:07:40 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:40:50 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_ch;
	const unsigned char	*src_ch;

	if (src == dst)
		return (dst);
	dst_ch = (unsigned char *)dst;
	src_ch = (const unsigned char *)src;
	while (n > 0)
	{
		*dst_ch = *src_ch;
		dst_ch++;
		src_ch++;
		n--;
	}
	return (dst);
}
