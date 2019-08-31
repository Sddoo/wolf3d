/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloren-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:55:23 by eloren-l          #+#    #+#             */
/*   Updated: 2018/11/29 21:18:47 by eloren-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_clear(char ***words, int word)
{
	while (word >= 0)
	{
		ft_strdel(&((*words)[word]));
		word--;
	}
	free(*words);
	return (NULL);
}

static int	ft_count_words(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		while (*s != c && *s != '\0')
		{
			s++;
			if (*s == c || *s == '\0')
				count++;
		}
		if (*s)
			s++;
	}
	return (count);
}

static int	ft_count_chars(char const *s, char c)
{
	int count;

	count = 0;
	while (*s != c && *s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		word;
	int		symb;

	if (s == NULL)
		return (NULL);
	word = 0;
	if (!(words = (char **)malloc(sizeof(char *) * ft_count_words(s, c) + 1)))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			if (!(words[word] = (char *)malloc(ft_count_chars(s, c) + 1)))
				return (ft_clear(&words, word - 1));
			symb = 0;
			while (*s != c && *s != '\0')
				words[word][symb++] = *s++;
			words[word++][symb] = '\0';
		}
		if (*s)
			s++;
	}
	words[word] = NULL;
	return (words);
}
