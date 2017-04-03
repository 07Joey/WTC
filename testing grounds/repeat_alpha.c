#include <unistd.h>

int		main(int ac, char **av)
{
	char	a;
	int		i;

	i = 0;
	a = 'a';
	if (ac != 1)
		write(1, "\n",1);
	while (av[1][i] != '\0')
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			a = av[1][i];
			while (a >= 'a')
			{
				write(1, &av[1][i], 1);
				a--;
			}
			i++;
		}
		else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			a = av[1][i];
			while (a >= 'A')
			{
				write(1, &av[1][i], 1);
				a--;
			}
			i++;
		}
		else
		{
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
}
