/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:53:06 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/19 15:20:44 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len);

int main()
{
	char dest[500] = "salut vincent de bourgogne";
	char src[500] = "bonjour louis";

	ft_memmove(dest, src, 10);
	printf("%s", dest);
	return (0);
}
