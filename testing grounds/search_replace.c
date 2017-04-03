#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		exit (1);
	}
	else
	{
		int		i;

		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			i++;
		}
		i = 0;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		exit (0);
	}
}
