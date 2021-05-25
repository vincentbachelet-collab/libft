/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:29:39 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/19 14:02:58 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);

int main()
{
	char str[50] = "salutluttlstlre";
	char *tab = ft_strrchr(str, 0);
	printf("%s", tab);
	return (0);
}
