/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:06:00 by judumay           #+#    #+#             */
/*   Updated: 2018/07/19 14:14:05 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_cat(int argc, char **argv)
{
	int fd;
	int ret;
	int i;
	char buf [BUF_SIZE + 1];

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			break;
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_cat(argc, argv);
	return (0);
}
