/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:43:06 by judumay           #+#    #+#             */
/*   Updated: 2018/07/24 10:56:07 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		i;

	i = 0;
	if (begin_list == 0)
		return (0);
	list = begin_list;
	if (list)
	{
		while (list)
		{
			list = list->next;
			i++;
		}
	}
	return (i);
}
