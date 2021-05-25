/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:19:53 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/15 08:50:53 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n);

int main()
{
	char str[500] = "salut";

	void *found = ft_memchr(str, 'u', 5);
	printf("%s", found);
	return (0);
}
