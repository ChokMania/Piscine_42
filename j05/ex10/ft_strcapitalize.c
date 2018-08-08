/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:00:56 by judumay           #+#    #+#             */
/*   Updated: 2018/07/09 12:10:21 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcapitalize(char *str)
{
	int i;
	int maj;

	maj = 1;
	i = -1;
	ft_strlowcase(str);
	while (str[++i] != '\0')
	{
		if (maj == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i++] -= 32;
			maj = 0;
		}
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			maj = 0;
		else
			maj = 1;
	}
	return (str);
}
