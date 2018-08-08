/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 21:20:30 by judumay           #+#    #+#             */
/*   Updated: 2018/07/18 22:12:52 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_condition(char op)
{
	if (op == '+')
		return (0);
	if (op == '-')
		return (1);
	if (op == '*')
		return (2);
	if (op == '/')
		return (3);
	if (op == '%')
		return (4);
	return (-1);
}

int		ft_verif(char op, int nb2, char **argv)
{
	int i;

	i = 0;
	while (argv[2][i])
		i++;
	if (i != 1)
		return (0);
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		ft_putstr("0\n");
		return (0);
	}
	if ((op == '/' || op == '%') && nb2 == 0)
	{
		ft_putstr("Stop : ");
		if (op == '/')
			ft_putstr("division by zero\n");
		if (op == '%')
			ft_putstr("modulo by zero\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		(*ft_calcul[5])(int, int);
	int		nb1;
	int		nb2;
	char	op;

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	op = argv[2][0];
	ft_calcul[0] = &ft_addition;
	ft_calcul[1] = &ft_soustraction;
	ft_calcul[2] = &ft_multi;
	ft_calcul[3] = &ft_division;
	ft_calcul[4] = &ft_modulo;
	if (ft_verif(op, nb2, argv) == 1)
	{
		ft_putnbr(ft_calcul[ft_condition(op)](nb1, nb2));
		ft_putchar('\n');
	}
	return (0);
}
