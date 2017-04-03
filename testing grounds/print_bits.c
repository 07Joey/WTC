#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int 	max;
	int		i;
	char str[8] = "00000000";

	max = 128;
	i = 0;
	while (i != 8)
	{
		if (octet >= max)
		{
			str[i] = '1';
			octet -= max;
		}
		else
		{
			str[i] = '0';
		}
		max /= 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int 	main(void)
{
	unsigned char	oct;

	oct = 'A';
	print_bits(oct);
	return (0);
}
