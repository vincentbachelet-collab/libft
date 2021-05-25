/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:15:47 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/16 16:24:55 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t		ft_strlcat(char *restrict dst, const char *restrict src, size_t t);

int main()
{
	char	dst[50] = "salutttt";
	char	src[50] = "bonjour";
	int		found1;
	int		found2;

	found1 = ft_strlcat(dst, src, 20);
	printf("fonction réecrite: %d\n", found1);
	found2 = ft_strlcat(dst, src, 20);
	printf("Vraie fonction: %d", found2);
	return (0);
}
