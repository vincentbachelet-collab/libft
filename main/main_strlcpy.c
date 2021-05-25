/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:25:19 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/20 11:58:40 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

int main()
{
	char dst[50] = "salut";
	char src[50] = "bonjour";
	int found;
	int found2;
	char *str1;

	found = ft_strlcpy(dst, src, 0);
	printf("%d\n", found);
	found2 = strlcpy(dst, src, 0);
	printf("vraie fonction : %d, avec le mot %s", found2, str1);
	return (0);
}
