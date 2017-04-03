#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int		main(void)
{
	int		a;
	int		b;

	a = 5;
	b = 10;
	ft_swap(&a, &b);
	printf("a equals %i \nb equals %i",a, b);
	return (0);
}
