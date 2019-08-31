/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:45:07 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:37:08 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char byte;

	byte = (char)c;
	while (*s != byte && *s != 0)
		s++;
	if (*s == byte)
		return ((char *)s);
	else
		return (NULL);
}
