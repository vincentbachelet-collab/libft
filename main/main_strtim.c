/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:16:51 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/21 18:21:07 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int main()
{
	const char s1[500] = "   xxxsalut  xxx";
	const char set[500] = " x";
	char *tab;

	tab = ft_strtrim(s1, set);
	printf("résultat : %s", tab);
	return (0);
}
