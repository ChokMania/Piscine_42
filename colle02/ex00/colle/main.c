/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:50:51 by judumay           #+#    #+#             */
/*   Updated: 2018/07/22 10:43:36 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		main(int argc, char **argv)
{
	char tab[400];

	(void)argc;
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]), tab);
	return (0);
}
