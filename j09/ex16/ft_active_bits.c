/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:48:24 by judumay           #+#    #+#             */
/*   Updated: 2018/07/13 11:59:41 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned i;

	i = 0;
	if (value == -2147483648)
		return (1);
	if (value < 0)
		value = -value;
	while (value != 0)
	{
		if (value % 2 == 1)
			i++;
		value /= 2;
	}
	return (i);
}
