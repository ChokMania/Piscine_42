/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 08:10:39 by judumay           #+#    #+#             */
/*   Updated: 2018/07/22 13:49:51 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>.

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (nb % i != 0 && nb != i)
		i++;
	if (nb == i)
		return (1);
	else
		return (0);
}

int main(int ac, char **av)
{
	printf("%d\n", ft_is_prime(atoi(av[1])));
		}
