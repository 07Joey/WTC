#include <unistd.h>

int	main()
{
	int	i;
	int	j;

	i = 'z';
	while (i >= 'a')
	{
		if (i % 2 == 0)
		{
			write(1, &i, 1);
		}
		else
		{
			j = i - 32;
			write(1, &j, 1);
		}
		i--;
	}
	write(1, "\n", 1);
}
