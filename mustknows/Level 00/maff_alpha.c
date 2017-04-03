#include <unistd.h>

int	main()
{
	int	i;
	int	j;

	i = 'a';
	while (i <= 'z')
	{
		if (i % 2 == 0)
		{
			j = i - 32;
			write(1, &j, 1);
		}
		else
		{
			write(1, &i, 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
