/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 09:18:19 by judumay           #+#    #+#             */
/*   Updated: 2018/07/24 11:40:19 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	if (begin_list == 0)
		return ;
	list_ptr = begin_list;
	while (list_ptr->next)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
