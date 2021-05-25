/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:14:54 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 15:10:52 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const char *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned long int	i;
	unsigned char		f;

	i = 0;
	str = (void *) s;
	f = c;
	while (i < n)
	{
		if (f == str[i])
		{
			return ((void *)str + i);
		}
		i++;
	}
	return (NULL);
}
