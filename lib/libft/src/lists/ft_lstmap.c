/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:56:55 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/29 21:14:21 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_clear(t_list **lst)
{
	t_list *next;

	while (*lst != NULL)
	{
		next = (*lst)->next;
		free((*lst)->content);
		free(*lst);
		*lst = next;
	}
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *n_list;
	t_list *result;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(n_list = f(lst)))
		return (NULL);
	result = n_list;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(n_list->next = f(lst)))
			return (ft_clear(&result));
		n_list = n_list->next;
		lst = lst->next;
	}
	return (result);
}
