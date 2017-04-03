#include <stdio.h>
#include <stdlib.h>

int 	main(int ac, char **ag)
{
	if (ac != 3)
	{
		printf("\n");
		return (1);
	}
	else
	{
		int		a;
		int		b;
		int		i;

		i = 100;
		a = atoi(ag[1]);
		b = atoi(ag[2]);
		while (i >= 0)
		{
			if (a % i == 0 && b % i == 0)
				printf("%i", i);
			i--;
		}
	}
	return (0);	
}
