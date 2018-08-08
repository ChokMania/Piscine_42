/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:47:13 by judumay           #+#    #+#             */
/*   Updated: 2018/07/12 18:12:01 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_takes_place(int hours)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hours == 0)
		printf("12.00 A.M. AND 1.00 A.M");
	else if (hours == 11)
		printf("11.00 A.M. AND 12.00 P.M");
	else if (hours == 12)
		printf("12.00 P.M. AND 1.00 P.M");
	else if (hours == 23)
		printf("11.00 P.M. AND 12.00 A.M");
	else if (hours < 11)
		printf("%d.00 A.M. AND %d.00 A.M", hours, hours + 1);
	else
		printf("%d.00 P.M. AND %d.00 P.M", hours - 12, hours - 11);
	printf("\n");
}
