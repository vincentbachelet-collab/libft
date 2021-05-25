/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:35:25 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/19 15:32:42 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t num);

int		main()
{
	char src[500] = "Salut messieurs";
	char dst[500] = "bonjour madame";


	ft_memcpy(dst, src, 5);	
	printf("%s\n", dst);
	return 0;
}
