/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:27:09 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/29 20:14:50 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	long len;
	char *new;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (!(new = (char *)malloc(len + 1)))
		return (NULL);
	new[len--] = '\0';
	while (len >= 0)
	{
		new[len] = f(s[len]);
		len--;
	}
	return (new);
}
