/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:51:05 by judumay           #+#    #+#             */
/*   Updated: 2018/07/12 21:59:15 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i <= k && k <= j) || (j <= k && k <= i))
		return (k);
	else if ((k <= i && i <= j) || (i <= k && j <= i))
		return (i);
	else
		return (j);
}
