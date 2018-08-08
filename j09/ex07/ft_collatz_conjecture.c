/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 00:07:37 by judumay           #+#    #+#             */
/*   Updated: 2018/07/13 00:19:51 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int i;

	i = 0;
	if (base == 0)
		return (0);
	if (base != 1)
	{
		i++;
		if (base % 2 == 0)
			return (i + ft_collatz_conjecture(base / 2));
		else
			return (i + ft_collatz_conjecture(3 * base + 1));
	}
	return (0);
}
