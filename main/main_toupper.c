/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:28:05 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/15 16:42:05 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_toupper(int c);

int main()
{
	int c;
	char found;

	c = 'e';
	found = ft_toupper(c);
	printf("%c", found);
	return (0);
}
