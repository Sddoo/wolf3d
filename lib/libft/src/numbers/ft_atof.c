/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:15:35 by eloren-l          #+#    #+#             */
/*   Updated: 2019/02/26 15:53:53 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static float	after_point(char *str)
{
	float	result;
	float	multiplier;

	result = 0;
	multiplier = 0.1;
	while (*str == '\t' || *str == ' ')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result + (*str - '0') * multiplier;
		multiplier *= 0.1;
		str++;
	}
	return (result);
}

static float	before_point(char *str, int *sign)
{
	float	result;

	result = 0;
	while (*str == '\t' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign = -1;
		str++;
	}
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

float			ft_atof(char *str)
{
	char	**split;
	float	b_point;
	float	a_point;
	int		sign;

	sign = 1;
	split = ft_strsplit(str, '.');
	b_point = before_point(split[0], &sign);
	a_point = after_point(split[1]);
	free_words(split);
	return ((float)sign * (b_point + a_point));
}
