/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:37:26 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 15:06:58 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		t;
	unsigned long int	i;

	i = 0;
	d = dst;
	s = src;
	t = c;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == t)
			return ((void *)d + i + 1);
		i++;
	}
	return (0);
}
