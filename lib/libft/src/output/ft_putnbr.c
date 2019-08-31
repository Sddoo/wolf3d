/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:53:28 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/23 21:18:26 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rec_putnbr(int n)
{
	if (n / 10 != 0)
		ft_rec_putnbr(n / 10);
	if (n > 0)
		ft_putchar((n % 10) + 48);
	else
		ft_putchar(-(n % 10) + 48);
}

void		ft_putnbr(int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
		ft_putchar('-');
	ft_rec_putnbr(n);
}
