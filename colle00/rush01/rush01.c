/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 14:18:25 by jngoma            #+#    #+#             */
/*   Updated: 2017/04/02 14:58:52 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x,int y)
{
	int		height;
	int		width;

	width = 1;
	height = 1;

	while (height <= y)
	{
		while (width <= x)
		{
			if (((width == 1) && (height == 1)) || ((width == x) && (height == y)))
				putchar('/');
			else if (((width == x) && (height == 1)) || ((height == y) &&(width == 1)))
				putchar('\\');
			else if (((width == 1) || (width == x)) && ((height > 1) || (height < y)))
				putchar('*');
			else if (((width > 1) || (width < x)) && ((height == 1) || (height == y)))
				putchar('*');
			else
				putchar(' ');
			width++;
		}
		width = 1;
		putchar('\n');
		height++;
	}
}

int main ()
{
	rush(4,5);
	return(0);
}
