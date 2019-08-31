/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:46:33 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 19:05:40 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	char	*new;

	if (s == NULL || len > len + 1)
		return (NULL);
	if (!(new = (char *)malloc(len + 1)))
		return (NULL);
	res = new;
	while (len > 0)
	{
		*new = s[start];
		new++;
		start++;
		len--;
	}
	*new = '\0';
	return (res);
}
