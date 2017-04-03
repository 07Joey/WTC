/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 03:11:33 by jngoma            #+#    #+#             */
/*   Updated: 2017/03/20 10:31:26 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int		i;

	i = nb - 1;
	while (i > 1)
	{
		nb *= i;
		i--;
		if (nb > 2147483646 || nb < 0)
		{
			return (666);
		}
		printf("%d \n", nb);
	}
	return (nb);
}
