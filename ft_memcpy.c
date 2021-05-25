/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:13:23 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 15:07:12 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	unsigned long int	i;
	unsigned char		*d;
	const char			*f;

	d = dst;
	f = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < num)
	{
		d[i] = f[i];
		i++;
	}
	return (d);
}
