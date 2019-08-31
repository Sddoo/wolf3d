/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_16.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:15:35 by eloren-l          #+#    #+#             */
/*   Updated: 2019/02/22 19:34:58 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi_16(const char *str)
{
	unsigned int	result;

	result = 0;
	while (*str == '\r' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == ' ')
		str++;
	while (*str == '0')
		str++;
	while ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'F'))
	{
		if (*str >= '0' && *str <= '9')
			result = result * 16 + *str - '0';
		else if (*str >= 'A' && *str <= 'F')
			result = result * 16 + *str - '7';
		str++;
	}
	return (result);
}
