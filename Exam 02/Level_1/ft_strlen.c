

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while(str[i] != '\0')
	{
		i = i + 1;
	}

	return (i);
}

#include <stdio.h>

int main(void)
{
	char *string = "Hello";
	printf("%i \n", ft_strlen(string));
}