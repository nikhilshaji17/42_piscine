#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int answer = 0;

	while (str[i] != '0')
	{
		while (str[i] == ' ' || str[i] == '\t' || (str[i] >= 9 && str[i] <= 13))
		{
			i = i + 1;
		}
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -1;
			i = i + 1;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			answer = (answer * 10) + (str[i] - 48);
			i = i + 1;
		}
		return (sign * answer);
	}
	return (sign * answer);
}


int main(void)
{
	printf("%i \n", atoi(" 	 - 1234a5"));
	printf("%i \n", ft_atoi(" 	 - 1234a5"));
}