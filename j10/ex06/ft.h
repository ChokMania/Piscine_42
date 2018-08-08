/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 21:21:17 by judumay           #+#    #+#             */
/*   Updated: 2018/07/17 11:59:11 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_addition(int nb1, int nb2);
int		ft_soustraction(int nb1, int nb2);
int		ft_multi(int nb1, int nb2);
int		ft_division(int nb1, int nb2);
int		ft_modulo(int nb1, int nb2);

#endif
