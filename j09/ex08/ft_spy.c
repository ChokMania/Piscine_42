/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 00:45:57 by judumay           #+#    #+#             */
/*   Updated: 2018/07/13 01:17:26 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int size;

	size = 0;
	while (to_find[size] != '\0')
		size++;
	if (size == 0)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (j == size - 1)
				return (1);
			j++;
		}
		if (str[i] != ' ')
			return (0);
		j = 0;
		i++;
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	while (av[i])
	{
		ft_strlowcase(av[i]);
		if (ft_strstr(av[i], "president") == 1)
			write(1, "Alert!!!\n", 9);
		else if (ft_strstr(av[i], "attack") == 1)
			write(1, "Alert!!!\n", 9);
		else if (ft_strstr(av[i], "bauer") == 1)
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
