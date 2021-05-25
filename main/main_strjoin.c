/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:38:26 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/21 17:42:43 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int main()
{
	char const *s1 = "salut";
	char const *s2 =" Vincent";
	char *result;
	
	result = ft_strjoin(s1, s2);
	printf("résultat: %s", result);
	return (0);
}
