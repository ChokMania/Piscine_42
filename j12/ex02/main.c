/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:25:06 by judumay           #+#    #+#             */
/*   Updated: 2018/07/22 16:09:31 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_tail(char *argv, int lenght)
{
	int fd;
	int ret;
	int i;
	char buf [BUF_SIZE + 1];

	i = 0;
	fd = open(argv, O_RDONLY);
	while ((ret = read(fd, buf, 1)))
	{
		i++;
	}
	fd = open(argv, O_RDONLY);
	ret = read(fd, buf, i - lenght);
	ret = read(fd, buf, lenght);
	buf[ret] = '\0';
	ft_putstr(buf);
}

void	ft_presentation(char *argv)
{
	ft_putstr("==>");
	ft_putstr(argv);
	ft_putstr("<==\n");
}

int		ft_verif(int argc, char **argv, int tab[1])
{
	int i;

	i = 2;
	if (argc < 2)
		return (0);
	if (argv[1][0] != '-' || argv[1][1] != 'c' || argv[1][2] != '\0') 
		return (0);
	tab[0] = atoi(argv[i]);
	if (tab[0] < 0)
		tab[0] *= -1;
	printf("longueur : %d", tab[0]);
	return (1);
}

	int	main(int argc, char **argv)
{
	int i;
	int tab[2];
	int lenght;

	if (ft_verif(argc, argv, tab) == 0)
		return (0);
	lenght = tab[0];
	i = 3;
	while (i < argc)
	{
		if (argc > 4)
			ft_presentation(argv[i]);
		ft_tail(argv[i++], lenght);
		if (i != argc)
			ft_putstr("\n");
	}
	return (0);
}
