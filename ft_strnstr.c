/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:40:01 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/19 10:32by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long int	i;
	const char			*h;
	const char			*n;
	unsigned long int	j;

	h = haystack;
	n = needle;
	i = 0;
	j = 0;
	if (n[j] == 0)
		return ((char *)h);
	while (i < len && len && h[i])
	{
		while (h[i] == n[j])
		{
			j++;
			if (n[j] == '\0')
				return ((char *)&h[i]);
		}
		i++;
	}
	return (0);
}
