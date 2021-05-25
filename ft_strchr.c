/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:03:00 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 10:57:48 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	f;
	int		i;

	f = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == f)
			return ((char *)s + i);
		i++;
	}
	if (!s[i] && !f)
		return ((char *)s + i);
	return (NULL);
}
