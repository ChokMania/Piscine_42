/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 19:27:29 by judumay           #+#    #+#             */
/*   Updated: 2018/07/06 14:57:35 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		fin;
	int		tmp;

	i = 0;
	fin = 1;
	while (fin <= size)
	{
		if (i == size - 1)
			i = 0;
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			fin = 1;
		}
		else
			fin++;
		i++;
	}
}
