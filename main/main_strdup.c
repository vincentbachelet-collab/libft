/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:41:32 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/16 16:48:41 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1);

int main()
{
	char s1[50] = " sal    uc999";
	char *found1;
	char *found2;

	found1 = ft_strdup(s1);
	printf("Fonction réecrite : %s\n", found1);
	found2 = strdup(s1);
	printf("Vraie fonction : %s", found2);
	return (0); 
}
