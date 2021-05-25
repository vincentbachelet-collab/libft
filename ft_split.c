/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:35:07 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/23 10:25:59 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	words;
	int	state;

	words = 0;
	state = 1;
	while (s && *s)
	{
		if (*s == c)
			state = 1;
		else
		{
			if (state == 1)
				++words;
			state = 0;
		}
		++s;
	}
	return (words);
}

static int	ft_letters(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	char	**tab;
	size_t	words;
	size_t	i;

	words = ft_countwords(s, c);
	tab = (char **)malloc(sizeof(char *) * words + 1);
	if (!s || !tab)
		return (NULL);
	index = -1;
	while (++index < words)
	{
		while (s && (*s == c))
			s++;
		tab[index] = malloc(sizeof(char) * ft_letters(s, c) + 1);
		if (!tab[index])
			return (0);
		i = 0;
		while (s && *s != c)
			tab[index][i++] = *s++;
		tab[index][i] = 0;
	}
	tab[index] = 0;
	return (tab);
}
