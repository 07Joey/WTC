/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapbits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 10:43:05 by jngoma            #+#    #+#             */
/*   Updated: 2017/03/30 11:59:07 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char   swap_bits(unsigned char octet)
{
	unsigned char result;

	printf("%o\n", octet);
	result = 0x0F;
	result = result & octet;
	result = result << 4;
	octet = octet >> 4;
	result = result | octet;
	printf("%o\n", result);
	while (octet)
	{
		if (result & 1)
			printf("1");
		if (result & 0)
			printf("0");
	}
	 return (result);
}

int   main(void)
{
	 swap_bits('A');
	 return (0);
}
