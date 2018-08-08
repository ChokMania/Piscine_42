/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 18:21:12 by judumay           #+#    #+#             */
/*   Updated: 2018/07/18 22:07:19 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_2;

	i = 0;
	tab_2 = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		tab_2[i] = f(tab[i]);
		i++;
	}
	return (tab_2);
}
