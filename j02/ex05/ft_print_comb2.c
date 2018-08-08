/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 08:42:38 by judumay           #+#    #+#             */
/*   Updated: 2018/07/03 22:48:42 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	affichage(int a, int b, int c, int d)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar(' ');
	ft_putchar('0' + c);
	ft_putchar('0' + d);
}

void	calcul(int a, int b, int c, int d)
{
	while (++a <= 9)
	{
		while (++b <= 9)
		{
			while (++c <= 9)
			{
				while (++d <= 9)
				{
					if (a < c || (a == c && b < d))
					{
						affichage(a, b, c, d);
						if (a != 9 || b != 8 || c != 9 || d != 9)
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
					}
				}
				d = -1;
			}
			c = -1;
		}
		b = -1;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = -1;
	b = -1;
	c = -1;
	d = 0;
	calcul(a, b, c, d);
}
