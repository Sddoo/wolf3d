/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:45:30 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:09:50 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;
	int		count;

	if (ft_strcmp(needle, "") == 0)
		return ((char *)haystack);
	size = ft_strlen(needle);
	count = len - size + 1;
	while (*haystack != 0 && count > 0)
	{
		if (*haystack == *needle)
			if (ft_memcmp(haystack, needle, size) == 0)
				return ((char *)haystack);
		haystack++;
		count--;
	}
	return (NULL);
}
