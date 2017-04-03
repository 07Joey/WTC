#include <unistd.h>

int 	main(int ac, char **av)
{
	int		len;
	int 	comp;
	int 	i;
	int		j;
	int		k;

	len = 0;
	comp = 0;
	i = 0;
	j = 0;
	k = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
	  	return (0);
	}
	else
	{
		 while (av[1][len] != '\0')
		{
			len++;
		}
		while(av[2][i] != '\0')
		{
			if (av[1][j] == av[2][i])
			{
				comp++;
				j++;
				i++;
			}
			else
			i++;
		}
		if (comp == len)
		{
			while(av[1][k] != '\0')
			{
				write(1, &av[1], 1);
				k++;
			}
		}
	}	
}

