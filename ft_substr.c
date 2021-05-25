/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:41:00 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 10:41:10 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dictionnaire;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		dictionnaire = malloc(sizeof(char) * ft_strlen(s) + 1);
	else
		dictionnaire = malloc(sizeof(char) * (len + 1));
	if (!dictionnaire)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (s[start + i] && i < len)
		{
			dictionnaire[i] = s[start + i];
			i++;
		}
		dictionnaire[i] = '\0';
	}
	else
		dictionnaire[0] = '\0';
	return (dictionnaire);
}
