/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:34:15 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/30 17:49:11 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*new;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (!(new = (char *)malloc(len + 1)))
		return (NULL);
	len = 0;
	while (*s)
	{
		new[len] = f(len, *s);
		len++;
		s++;
	}
	new[len] = '\0';
	return (new);
}
