/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:41:07 by judumay           #+#    #+#             */
/*   Updated: 2018/07/22 11:44:56 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*void	aff(char *buf)
{
	if (buf[0] == '\0')
		ft_putstr("[colle00] [0][0] | [colle0] [0] [0] | [colle-02] [0][0] | [colle-03] [0][0] | [colle04] [0][0]\n");
	else if (buf[0] == 'A' && buf[2] == '\0')
		ft_putstr("[colle-02] [1][1] | [colle-03] [1][1] | [colle04] [1][1]\n");
	else if (buf[0] != 'o' && buf[0] != '/' && buf[0] != 'A')
		ft_putstr("aucune\n");
}
*/

#include <stdio.h>

void	get_size(char *buf, int tab[2], int compteur)
{
	int x;
	int y; 

	y = 0;
	ft_putstr(buf);
	printf("compteur : %d\n", compteur);
	while (compteur != 0)
	{
		x = 0;
		while (buf[x] != '\n')
		{
			printf("%c\n", buf[x]);
			x++;
		}
		compteur--;
		y++;
	}
	tab[0] = x;
	tab[1] = y;
	printf("x %d\ty %d", x, y);
}
int compare();

int		main(void)
{
	char buf[BUF_SIZE + 1];
	int ret;
	int tab[2];
	int compteur;

	compteur = 0;
	while ((ret = read(0, buf, 1)))
	{
		compteur++;
		ft_putstr(buf);
		buf[ret] = '\0';
	}
	get_size(buf, tab, compteur);
	return (0);
}
