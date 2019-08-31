/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:15:35 by eloren-l          #+#    #+#             */
/*   Updated: 2018/12/01 19:51:12 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_ret(unsigned long result, int sign, int count)
{
	if ((result >= 9223372036854775808ULL || count >= 20) && sign == -1)
		return (0);
	if ((result >= 9223372036854775807 || count >= 20) && sign == 1)
		return (-1);
	return (((int)result) * sign);
}

int			ft_atoi(const char *str)
{
	unsigned long	result;
	int				sign;
	int				count;

	sign = 1;
	count = 0;
	result = 0;
	while (*str == '\r' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		count++;
		result = result * 10 + *str - '0';
		str++;
	}
	return (ft_atoi_ret(result, sign, count));
}
