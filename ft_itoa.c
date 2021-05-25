/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:23:28 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/24 10:41:58 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbrlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		n = n + 1;
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	size;
	int		longueur;

	size = n;
	longueur = nbrlen(n);
	str = malloc(sizeof(char) * longueur + 1);
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		size = size * -1;
	str[longueur] = 0;
	while (longueur >= 0)
	{
		str[longueur - 1] = (size % 10) + 48;
		size = size / 10;
		longueur--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
