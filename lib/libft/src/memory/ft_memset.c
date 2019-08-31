/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:14:13 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/23 15:53:44 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char byte;
	unsigned char *change;

	change = (unsigned char *)b;
	byte = (unsigned char)c;
	while (len > 0)
	{
		*change = byte;
		change++;
		len--;
	}
	return (b);
}
