/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:57:37 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:06:31 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t size;

	if (ft_strcmp(needle, "") == 0)
		return ((char *)haystack);
	size = ft_strlen(needle);
	while (*haystack != 0)
	{
		if (*haystack == *needle)
			if (ft_memcmp(haystack, needle, size) == 0)
				return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
