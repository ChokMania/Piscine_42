/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:56:16 by judumay           #+#    #+#             */
/*   Updated: 2018/07/22 11:25:52 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_horizontal_line(int x, int j, char *tab)
{
	int i;

	i = 1;
	tab[j++] = 'o';
	while (i < x - 1)
	{
		tab[j++] = '-';
		i++;
	}
	tab[j++] = 'o';
	tab[j++] = '\n';
	return (j);
}

int		ft_middle_line(int x, int j, char *tab)
{
	int i;

	i = 0;
	tab[j++] = '|';
	while (i < x - 2)
	{
		tab[j++] = ' ';
		i++;
	}
	tab[j++] = '|';
	tab[j++] = '\n';
	return (j);
}

int		ft_vertical_line(int y, int j, char *tab)
{
	int i;

	i = 0;
	tab[j++] = 'o';
	tab[j++] = '\n';
	while (i < y - 2)
	{
		tab[j++] = '|';
		tab[j++] = '\n';
		i++;
	}
	tab[j++] = 'o';
	tab[j++] = '\n';
	return (j);
}

void	rush(int x, int y, char *tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (x > 0 && y > 0)
	{
		if (x == 1 && y == 1)
		{
			tab[j++] = 'o';
			tab[j++] = '\n';
		}
		if (y == 1 && x != 1)
			j = ft_horizontal_line(x, j, tab);
		if (x == 1 && y != 1)
			j = ft_vertical_line(y, j, tab);
		if (x > 1 && y > 1)
		{
			j = ft_horizontal_line(x, j, tab);
			while (++i <= y - 2)
				j = ft_middle_line(x, j, tab);
			j = ft_horizontal_line(x, j, tab);
		}
	}
	ft_putstr(tab);
}
