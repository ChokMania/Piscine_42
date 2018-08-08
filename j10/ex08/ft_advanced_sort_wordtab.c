/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:31:44 by judumay           #+#    #+#             */
/*   Updated: 2018/07/18 22:31:49 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
		if (cmp(tab[i], tab[i + 1]) < 0)
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
