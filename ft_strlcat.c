/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:05:23 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 14:19:55 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (++i < dstsize && *dst)
		dst++;
	if (i == dstsize)
		return (i + (unsigned int)ft_strlen(src));
	j = -1;
	while (src[++j])
		if (j < dstsize - i - 1)
			*dst++ = src[j];
	*dst = '\0';
	return (i + j);
}
