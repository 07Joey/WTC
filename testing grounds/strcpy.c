#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int		main(void)
{
	char *str1 = "Joseph rocks!!!!";
	char *str2 = "";
	ft_strcpy(str1, str2);
	return (0);
}

