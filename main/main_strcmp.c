/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:06:07 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/19 19:13:06 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, int n);
	
int main()
{
	char str1[500] = "t";
	char str2[500] = "";

	int decimal = ft_strncmp(str2, str1, 0);
	printf("%d", decimal);
	return (0);
}
