/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 10:23:34 by jngoma            #+#    #+#             */
/*   Updated: 2017/03/30 14:42:02 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bit(unsigned char octet)
{
	int		count;
	int		i;
	
	i = 0;
	count = 128;
	while (i != 8)
	{
		if (octet >= count)
		{
			write(1, "1", 1);
			octet -= count;
		}
		else
			write(1, "0", 1);
		count /= 2;
		i++;
	}
	write(1, "\n", 1);
}

/*unsigned char	swap_bits(unsigned char octet)
{
	octet = octet >> 4 | octet << 4;
	print_bit(octet);
	return (octet);
}*/

int 	main(void)
{
	unsigned char 	c;

	c = 'A';
	print_bit(c);
	//swap_bits(c);
	return (0);
}
