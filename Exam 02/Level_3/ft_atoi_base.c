#include <stdio.h>

int skipSpaces(const char *str, int index)
{
	while(str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
	{
		index = index + 1;
	}
	return index;
}

int isValid(char c, int str_base)
{
	char lowerCase[17] = "0123456789abcdef";
	char upperCase[17] = "0123456789ABCDEF";
	int i;

	i = 0;
	while(i < str_base)
	{
		if (lowerCase[i] == c || upperCase[i] == c)
			return (1);
		i = i + 1;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	i = skipSpaces(str, i);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i = i + 1;
	}

	while(str[i] != '\0')
	{
		if (isValid(str[i], str_base))
		{
			result = (result * str_base);
			if (str[i] >= '0' && str[i] <= '9')
            	result += str[i] - '0';
			else if (str[i] >= 'a' && str[i] <= 'f')
            	result += str[i] - 'a' + 10;
        	else if (str[i] >= 'A' && str[i] <= 'F')
            	result += str[i] - 'A' + 10;
		}
		else
			return (result * sign);
		i = i + 1;		
	}
	return (result * sign);	
}

int main(void)
{
	int answer = 0;

	answer = ft_atoi_base(" -FF", 16);
	printf("%i \n", answer);
}