/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:48:11 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 15:19:22 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c);

int main()
{
	int c;
	char found;

	c = 'Z';
	found = ft_tolower(c);
	printf("%c", found);
	return (0);
}
