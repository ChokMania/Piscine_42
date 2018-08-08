/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 11:58:31 by judumay           #+#    #+#             */
/*   Updated: 2018/07/18 14:28:17 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*string;
	int				i;
	int				j;

	i = 0;
	string = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	while (ac > i)
	{
		j = 0;
		while (av[i][j])
			j++;
		string[i].size_param = j;
		string[i].str = av[i];
		string[i].copy = ft_strdup(av[i]);
		string[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	string[i].str = 0;
	return (string);
}
