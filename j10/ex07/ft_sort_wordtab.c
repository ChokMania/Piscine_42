/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:25:58 by judumay           #+#    #+#             */
/*   Updated: 2018/07/18 22:31:37 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != '\0')
		return (s1[i]);
	else if (s2[i] != '\0')
		return (-s2[i]);
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		fin;
	int		argc;
	char	*temp;

	i = 0;
	argc = 0;
	fin = 1;
	while (tab[argc])
		argc++;
	while (fin < argc && argc > 2)
	{
		if (i == argc - 1)
			i = 0;
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			fin = 1;
		}
		else
			fin++;
		i++;
	}
}
