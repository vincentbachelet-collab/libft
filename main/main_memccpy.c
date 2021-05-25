/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:33:12 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/19 17:30:53 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *restrict dst, void *restrict src, int c, size_t n);

int		main()
{
	char src[500] = "coucou";
	char dst[500] = "A";


	ft_memccpy(dst, src, 'c', 10);	
	printf("%s\n", dst);
	return 0;
}
