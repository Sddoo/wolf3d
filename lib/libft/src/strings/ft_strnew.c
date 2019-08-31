/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 20:11:31 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/29 15:40:46 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	if (size > size + 1)
		return (NULL);
	if (!(new = (char *)malloc(size + 1)))
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}
