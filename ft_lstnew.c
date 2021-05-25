/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:21:03 by vbachele          #+#    #+#             */
/*   Updated: 2021/05/21 15:45:47 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*Next;

	Next = malloc(sizeof(Next));
	if (!Next)
		return (NULL);
	if (Next == NULL)
		exit(EXIT_FAILURE);
	Next->content = content;
	Next->next = NULL;
	return (Next);
}
