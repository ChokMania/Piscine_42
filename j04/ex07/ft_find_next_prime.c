/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 09:49:51 by judumay           #+#    #+#             */
/*   Updated: 2018/07/08 01:00:18 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (!(ft_is_prime(i)))
		i++;
	return (i);
}
