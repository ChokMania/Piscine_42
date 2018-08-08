/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 09:46:43 by judumay           #+#    #+#             */
/*   Updated: 2018/07/24 16:42:25 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	if (begin_list == 0)
		return ;
		list_ptr = list_ptr->next;
	list_ptr = *begin_list;
	while (list_ptr->next)
	{
		if ((*cmp)(list_ptr->next->data, data_ref) == 0)
		{
			list_ptr->next = list_ptr->next->next;
			free(list_ptr->next);
		}
		list_ptr = list_ptr->next;
	}
}
