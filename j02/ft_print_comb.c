/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 21:35:21 by judumay           #+#    #+#             */
/*   Updated: 2018/07/02 22:00:13 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	
	a = 0;
	b = 0;
	c = 0;
	while(a <= 7)
	{
		b = a + 1;
		while(b <= 8)
		{
			c = b + 1;
			while(c <= 9)
			{
				ft_putchar('0' + a);
				ft_putchar('0' + b);
				ft_putchar('0' + c);
				if (a != 7 || b != 8 || c!= 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			c++;
			}
		b++;
		}
	a++;
	}
}
