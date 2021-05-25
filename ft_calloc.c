/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:52:10 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 15:33:10 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*tab;

	tab = malloc(size * count);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, size * count);
	return ((void *)tab);
}
