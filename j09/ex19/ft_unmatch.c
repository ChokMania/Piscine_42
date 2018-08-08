/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:45:10 by judumay           #+#    #+#             */
/*   Updated: 2018/07/13 12:19:26 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(int *tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (tab[i] == tab[i + 1])
			i += 2;
		else
			return (tab[i]);
	}
	return (0);
}

int		ft_unmatch(int *tab, int length)
{
	int i;
	int fin;
	int tmp;

	i = 0;
	fin = 1;
	while (fin <= length)
	{
		if (i == length - 1)
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
	return (check(tab, length));
}
