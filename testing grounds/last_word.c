#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	
	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	else
	{
		while (av[1][i] != '\0')
			i++;
		while (av[1][i] != ' ')
			i--;
		while (av[1][i] != '\0')
		{
			i++;
			write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
