/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:20:21 by judumay           #+#    #+#             */
/*   Updated: 2018/07/13 13:12:51 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count(char **tab)
{
	int i;
	int j;
	int compteur;

	i = 1;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			compteur++;
			j++;
		}
		compteur++;
		i++;
	}
	return (compteur + 1);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	while (tab[i])
		i++;
	while (sep[j])
		j++;
	k = 0;
	str = (char*)malloc(sizeof(*str) * (ft_count(tab) + (i * j) - j + 1));
	i = -1;
	while (tab[++i])
	{
		j = 0;
		while (tab[i][j])
			str[k++] = tab[i][j++];
		j = 0;
		while (sep[j] && tab[i + 1] != '\0')
			str[k++] = sep[j++];
	}
	str[k] = '\0';
	return (str);
}
