/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:28:27 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 10:49:15 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*f;

	i = 0;
	f = s;
	while (f[i])
		i++;
	if (!f[i] && !c)
		return ((void *)f + i);
	while (i--)
		if (f[i] == (char)c)
			return ((void *)f + i);
	return (0);
}
