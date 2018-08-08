/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 08:57:12 by judumay           #+#    #+#             */
/*   Updated: 2018/07/24 11:00:37 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*list;
	unsigned int		i;

	i = 0;
	if (begin_list == 0)
		return (0);
	list = begin_list;
	if (list)
	{
		while (i < nbr)
		{
			list = list->next;
			i++;
		}
	}
	return (list);
}
