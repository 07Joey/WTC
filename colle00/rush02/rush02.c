/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 14:18:25 by jngoma            #+#    #+#             */
/*   Updated: 2017/03/18 16:46:03 by jngoma           ###   ########.fr       */
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
			{
				putchar('A');
			}
			else if (((width == x) || (width == 1)) && ((height < y) &&(height > 1)))
			{		
				putchar('B');
			}
			else if (((height == 1) || (height == y)) && ((width > 1) || (width < 1)))
			{
				putchar('B');
			}
			else if (((width == 1) || (width == x)) && ((height == y)))
			{
				putchar('C');
			}
			else
			{
				putchar(' ');
			}
		width++;
		}
		width = 1;
		putchar('\n');
		height++;
	}
}

int main ()
{
	rush(5,3);
	return(0);
}
