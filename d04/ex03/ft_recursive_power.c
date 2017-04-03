/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 12:48:22 by jngoma            #+#    #+#             */
/*   Updated: 2017/03/20 13:04:04 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		ft_recursive_power(int nb, int power)
{
	int		temp;

	temp = nb;
	if (power == 0 || nb > 2147483646)
	{
		return (0);
	}
	while (power != 0)
	{
		return ((temp * temp), power);
		power--;
		printf("%d", temp);
	}
	return (0);
}

int		main(void)
{
	ft_recursive_power(5, 3);
}
