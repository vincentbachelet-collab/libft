/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:58:50 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/21 16:59:22 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main()
{
	char *s = "Bonjour";
	char *result;
	
	result = ft_substr(s, 'j', 2);
	printf("résultat : %s", result);
	return (0);
}
