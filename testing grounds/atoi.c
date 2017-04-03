#include <stdio.h>

int		atoi(const char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		i = (i<<3) + (i<<1) + (*str) - '0';
		str++;
	}
	printf("%i", i);
	return (i);
}

int		main(void)
{
	const char *str = "1234567";
	atoi(str);
	return (0);
}
