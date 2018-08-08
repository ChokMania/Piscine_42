/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:55:16 by judumay           #+#    #+#             */
/*   Updated: 2018/07/22 10:50:07 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_first_line(int x, int j, char *tab)
{
	int i;

	i = 1;
	tab[j++] = 'A';
	while (i < x - 1)
	{
		tab[j++] = 'B';
		i++;
	}
	tab[j++] = 'C';
	tab[j++] = '\n';
	return (j);
}

int		ft_last_line(int x, int j, char *tab)
{
	int i;

	i = 1;
	tab[j++] = 'A';
	while (i < x - 1)
	{
		tab[j++] = 'B';
		i++;
	}
	tab[j++] = 'C';
	tab[j++] = '\n';
	return (j);
}

int		ft_middle_line(int x, int j, char *tab)
{
	int i;

	i = 0;
	tab[j++] = 'B';
	while (i < x - 2)
	{
		tab[j++] = ' ';
		i++;
	}
	tab[j++] = 'B';
	tab[j++] = '\n';
	return (j);
}

int		ft_vertical_line(int y, int j, char *tab)
{
	int i;

	i = 0;
	tab[j++] = 'A';
	tab[j++] = '\n';
	while (i < y - 2)
	{
		tab[j++] = 'B';
		tab[j++] = '\n';
		i++;
	}
	tab[j++] = 'C';
	tab[j++] = '\n';
	return (j);
}

void	rush(int x, int y, char *tab)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (x > 0 && y > 0)
	{
		if (x == 1 && y == 1)
		{
			tab[j++] = 'A';
			tab[j++] = '\n';
		}
		if (y == 1 && x != 1)
			j = ft_first_line(x, j, tab);
		if (x == 1 && y != 1)
			j = ft_vertical_line(y, j, tab);
		if (x > 1 && y > 1)
		{
			j = ft_first_line(x, j, tab);
			while (++i <= y - 2)
				j = ft_middle_line(x, j, tab);
			j = ft_last_line(x, j, tab);
		}
	}
}
