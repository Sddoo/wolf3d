/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:08:55 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/24 16:35:04 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next_el;

	if (alst == NULL || *alst == NULL || del == NULL)
		return ;
	while (*alst != NULL)
	{
		next_el = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = next_el;
	}
}
