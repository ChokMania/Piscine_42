/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:06:00 by judumay           #+#    #+#             */
/*   Updated: 2018/07/19 14:08:52 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_display_file(char argv[1])
{
	int fd;
	int ret;
	char buf [BUF_SIZE + 1];
	
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
		if (argc < 2)
			ft_putstr("File name missing.\n");
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
