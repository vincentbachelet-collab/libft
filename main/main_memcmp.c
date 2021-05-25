/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:41:17 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/19 18:38:31 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
	char str1[500] = "salut";
	char str2[500] = "ralut";

	int decimal = ft_memcmp(str2, str1, 1);
	printf("%d", decimal);
	return (0);
}
