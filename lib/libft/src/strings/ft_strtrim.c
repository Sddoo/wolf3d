/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:49:43 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/26 21:05:10 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_count(char const *s, int *count)
{
	*count = 0;
	while (*s)
	{
		s++;
		*count = *count + 1;
	}
	*count = *count + 1;
	if (*count == 1)
		return ((char *)s);
	s--;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		*count = *count - 1;
		s--;
	}
	s++;
	return ((char *)s);
}

char				*ft_strtrim(char const *s)
{
	char	*res;
	char	*new;
	char	*start;
	char	*end;
	int		len;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	start = (char *)s;
	end = ft_count(s, &len);
	if (!(new = (char *)malloc(len)))
		return (NULL);
	res = new;
	while (start != end)
	{
		*new = *start;
		new++;
		start++;
	}
	*new = '\0';
	return (res);
}
