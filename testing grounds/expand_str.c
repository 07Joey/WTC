#include <unistd.h>

int		main(int ac, char **argv)
{
	int		i;

	i = 0;
	j = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	else
	{
		while (av[i] != '\0')
		{
			if (av[i] == ' ')
			{
				if ( i > 0)
				{
					while (av[i] == ' ')
					{
						i++;
					}
					write(1, "   ", 3);
				}
				else
				{
					while (av[i] == ' ')
					{
						i++;
					}
				}
			}
			write(1, &av[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
