/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:54:03 by eloren-l          #+#    #+#             */
/*   Updated: 2018/12/28 23:40:52 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_descr	*crt_add_node(t_descr **descr, int fd)
{
	(*descr) = (t_descr *)malloc(sizeof(t_descr));
	(*descr)->fd = fd;
	(*descr)->rem = NULL;
	(*descr)->next = NULL;
	return (*descr);
}

static int		srch_wrt_out(char **output, t_descr *descr)
{
	char	*buff;
	int		i;

	i = 0;
	while (descr->rem[i] != '\0' && descr->rem[i] != '\n')
		i++;
	if (descr->rem[i] == '\0')
	{
		buff = ft_strjoin(*output, descr->rem);
		ft_strdel(output);
		ft_strdel(&descr->rem);
		*output = buff;
		return (1);
	}
	descr->rem[i] = '\0';
	buff = ft_strjoin(*output, descr->rem);
	free(*output);
	*output = buff;
	buff = ft_strdup(&descr->rem[i + 1]);
	ft_strdel(&descr->rem);
	descr->rem = buff;
	return (0);
}

static int		rd_wrt_line(t_descr *descr, int const fd, char **line)
{
	int				flag;
	int				output;
	char			buff[BUFF_SIZE + 1];

	flag = 1;
	output = 1;
	while (flag && output)
	{
		output = (read(fd, buff, BUFF_SIZE));
		buff[output] = '\0';
		descr->rem = (char *)malloc(output + 1);
		ft_memcpy(descr->rem, buff, output + 1);
		flag = srch_wrt_out(line, descr);
	}
	if (output == 0 && **line == 0)
		return (0);
	return (1);
}

static t_descr	*srch_descr(t_descr **descr, const int fd)
{
	t_descr *curr_descr;
	t_descr *start;

	if ((*descr)->fd == fd)
	{
		curr_descr = *descr;
		return (curr_descr);
	}
	start = *descr;
	while ((*descr)->next != NULL)
	{
		if ((*descr)->next->fd == fd)
		{
			curr_descr = (*descr)->next;
			*descr = start;
			return (curr_descr);
		}
		*descr = (*descr)->next;
	}
	crt_add_node(&(*descr)->next, fd);
	curr_descr = (*descr)->next;
	*descr = start;
	return (curr_descr);
}

int				get_next_line(const int fd, char **line)
{
	static t_descr	*descr_start;
	t_descr			*descr;

	if (line == NULL || fd < 0 || read(fd, NULL, 0) < 0)
		return (-1);
	*line = NULL;
	*line = ft_strnew(0);
	if (descr_start == NULL)
		descr = crt_add_node(&descr_start, fd);
	else
		descr = srch_descr(&descr_start, fd);
	if (descr->rem != NULL)
		if (srch_wrt_out(line, descr) == 0)
			return (1);
	return (rd_wrt_line(descr, fd, line));
}
