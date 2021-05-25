/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:31:05 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 15:52:43 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
size_t dstsize)
{
	size_t				srcsize;
	const char			*s;
	unsigned long int	i;

	i = 0;
	s = src;
	if (!dst && !src)
		return (0);
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	while (s[i] && i + 1 < dstsize)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
