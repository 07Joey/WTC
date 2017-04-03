/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 10:52:29 by jngoma            #+#    #+#             */
/*   Updated: 2017/03/20 11:46:44 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int		temp;

	temp = nb;
	if (power == 0 || nb > 2147483646 || nb < -2147483646)
	{
		return (0);
	}
	while (power != 0)
	{
		temp = temp * nb;
		power--;
		printf("%d", temp);
	}
	return (temp);
}
