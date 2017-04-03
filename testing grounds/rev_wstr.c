#include <stdio.h>

int 	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ac != 2)
	{
		printf("\n");
		return (1);
	}
	else
	{
		while ( av[1][i] != '\0')
		{
			i++;
		}
		while (i >= 0)
		{	
			while (av[1][i] != ' ')
			{
				i--;
				j++;
			}
			while (j != 0)
			{
				printf("%c", av[1][i]);
				i++;
			}
			i -= j;
			j = 0;
		}
	}
}
