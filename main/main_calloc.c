/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:40:08 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/16 18:17:31 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t count, size_t size);


int main()
{
	int *found1;
	int *found2;
	int a;
	int i;

	a = 10;
	found1 = (int*)ft_calloc(a, sizeof(int));
	for(i = 0; i < a; i++)
		found1[i] = i + 1;
	for(i = 0; i < a; i++)
	printf("Fonction réecrite : %d\n", found1[i]);
	found2 = (int*)calloc(a, sizeof(int));
	for(i = 0; i < a; i++)
		found2[i] = i + 1;
	for(i = 0; i < a; i++)
	printf("vraie fonction : %d\n", found2[i]);
	return (0);
}
