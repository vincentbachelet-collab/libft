/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 12:16:59 by vbachele          #+#    #+#             */
/*   Updated: 2021/04/29 11:09:06 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd);

int main()
{
	int n;
	char buff[128];
	int fd;

	n = 42;
	fd = open("ft_putnbr_fd.c", O_WRONLY);
	if (fd != 0)
		ft_putnbr_fd(n, fd);
	else 
		printf("impossible d'ouvrir le fichier");
	return (0);
}
