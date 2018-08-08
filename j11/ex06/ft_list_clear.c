/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 20:46:21 by judumay           #+#    #+#             */
/*   Updated: 2018/07/24 11:35:05 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (begin_list == 0)
		return ;
	ft_list_clear(&((*begin_list)->next));
	free(*begin_list);
	*begin_list = 0;
}
