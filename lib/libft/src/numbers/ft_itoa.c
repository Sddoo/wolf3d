/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:10:34 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/26 21:08:29 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa_neg(char *number, int digits, int n)
{
	number[digits] = '\0';
	while (--digits > 0)
	{
		number[digits] = -(n % 10) + 48;
		n = n / 10;
	}
	number[digits] = '-';
}

static void	ft_itoa_pos(char *number, int digits, int n)
{
	number[digits] = '\0';
	while (--digits >= 0)
	{
		number[digits] = (n % 10) + 48;
		n = n / 10;
	}
}

char		*ft_itoa(int n)
{
	int		digits;
	char	*number;
	int		inter;

	inter = n;
	digits = 0;
	while (inter != 0)
	{
		inter = inter / 10;
		digits++;
	}
	if (n < 0 || n == 0)
		digits++;
	if (!(number = (char *)malloc(digits + 1)))
		return (NULL);
	if (n < 0)
		ft_itoa_neg(number, digits, n);
	else
		ft_itoa_pos(number, digits, n);
	return (number);
}
