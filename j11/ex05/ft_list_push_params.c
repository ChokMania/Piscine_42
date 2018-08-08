/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 15:38:00 by judumay           #+#    #+#             */
/*   Updated: 2018/07/24 10:49:58 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*beg;

	list = ft_create_elem(av[ac - 1]);
	beg = list;
	ac--;
	while (ac > 0)
	{
		list->next = ft_create_elem(av[ac - 1]);
		list = list->next;
		ac--;
	}
	return (beg);
}
