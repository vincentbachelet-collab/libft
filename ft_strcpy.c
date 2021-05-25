/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:15:27 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 10:55:48 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
size_t dstsize)
{
	int				i;
	unsigned char	*d;
	const char		*s;

	i = 0;
	d = dst;
	s = src;
	if (dstsize == 0)
		return (0);
	while (i < dstsize - 1)
	{
		d[i] = s[i];
		i++;
	}
	return (i);
}
