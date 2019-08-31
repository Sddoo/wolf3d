/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:17:43 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/23 17:26:48 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *result;

	result = dst;
	while (*src != 0 && n > 0)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dst = 0;
		dst++;
		n--;
	}
	return (result);
}
