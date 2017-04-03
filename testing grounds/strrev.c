#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (&str[i]);
}

int		main(void)
{
	char	*str;

	str = "Hello bitches!!!";
	ft_strrev(str);
	return (0);
}
