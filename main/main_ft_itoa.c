/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:23:40 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/26 15:26:03 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_itoa(int n);

int		main()
{
	int n;
	int n1;
	int n2;
	char *result;
	char *result2;
	char *result3;

	n = 0;
	n1 = 42;
	n2 = -50;
	result = ft_itoa(n);
	result2 = ft_itoa(n1);
	result3 = ft_itoa(n2);

	printf("%s\n", result);
	printf("%s\n", result2);
	printf("%s\n", result3);
	return (0);
}
