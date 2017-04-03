#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int		i;
	int		hold;
	i = 1;
	hold = tab[0];
	while (len > 0)
	{
		if (hold - tab[i] < 0)
			hold = tab[i];
		i++;
		len--;
	}
	printf("%i", hold);
	return (hold);
}

int		main(void)
{
	int		intarray[7] = { 1,29,9,4,5,6,10};
	max(intarray, 6);
}
