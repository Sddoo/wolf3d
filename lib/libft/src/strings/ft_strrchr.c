/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:15:52 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:10:11 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *result;
	char byte;

	result = NULL;
	byte = (char)c;
	if (*s == byte)
		result = (char *)s;
	while (*s != 0)
	{
		s++;
		if (*s == byte)
			result = (char *)s;
	}
	return (result);
}
