/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 09:40:01 by judumay           #+#    #+#             */
/*   Updated: 2018/07/16 17:50:33 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	my_ft_putstr(char *str)
{
	while (str)
		write(1, ++str, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		my_ft_putstr("-2147483648");
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10 && nb != -2147483648)
		ft_putnbr(nb / 10);
	if (nb > 0 && nb != -2147483648)
		ft_putchar((nb % 10) + '0');
}
