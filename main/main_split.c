/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:17:28 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/23 14:35:01 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char const *s, char c);

int     main(int ac, char **av)
{
        char **ret;
        (void)ac;

        for (ret = ft_split(av[1], 'c'); *ret; ret++)
                printf("%s\n",*ret);
        return 0;
}
