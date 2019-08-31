/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:53:28 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/23 21:38:04 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rec_putnbr_fd(int n, int fd)
{
	if (n / 10 != 0)
		ft_rec_putnbr_fd(n / 10, fd);
	if (n > 0)
		ft_putchar_fd((n % 10) + 48, fd);
	else
		ft_putchar_fd(-(n % 10) + 48, fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_rec_putnbr_fd(n, fd);
}
