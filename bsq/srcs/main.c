/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:18:14 by judumay           #+#    #+#             */
/*   Updated: 2018/07/24 00:19:13 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int get_size_x(char *argv)
{
	int		fd;
	int		ret;
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 0;
	fd = open(argv, O_RDONLY);
	while ((ret = read(fd, buf, 1)))
	{
		i++;
		if (buf[ret - 1] == '\n')
			break ;
		buf[ret] = '\0';
	}
	close(fd);
	return (i);
}

#include <stdio.h>

int		**ft_recup(char *argv, int size, int nb_char)
{
	int		**buf;
	int		*temp;
	int		ret;
	int		fd;
	int		j;
	int i;

	buf = (int**)malloc(sizeof(int*) * (BUF_SIZE));
	temp = (int*)malloc(sizeof(int*) * (size));
	fd = open(argv, O_RDONLY);
	if (fd == - 1)
		return 0;
	read(fd, temp, size);
	free(temp);
	j = 0;
	i = 0;
	buf[j] = (int*)malloc(sizeof(int) * (nb_char));
	while ((ret = read(fd, buf[j], 1)) > 0)
	{
		printf("%c", buf[j][i]);
		if (buf[j][i] == '.')
			buf[j][i++] = -1;
		if (buf[j][i] == 'o')
			buf[j][i++] = 0;
		if (buf[j][i] == '\n')
		{
			buf[j][i] = 0;
			j++;
			i = 0;
			dprintf(1, "hey");
		}
		buf[j] = (int*)malloc(sizeof(int) * (nb_char));
	}
	close(fd);
	return (buf);
}

int		main(int argc, char **argv)
{
	int		i;
	int		nb_char;
	int		size_beg;
	int		**tab;
	int j;
	int k;

	if (argc < 2)
		return (0);
	i = 0;
	while (++i < argc)
	{
		j = 0;
		k = 0;
		nb_char = ft_count_x(argv[i]);
		size_beg = get_size_x(argv[i]);
		tab = ft_recup(argv[i], size_beg, nb_char);
		while (k < 10)
		{
			j = 0;
			while (j < 10)
				printf("%d\t", tab[k][j++]);
			printf("\n");
			k++;
		}
		if (i < argc - 1)
			ft_putchar('\n');
	}
	return (0);
}
