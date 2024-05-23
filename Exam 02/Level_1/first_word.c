#include <unistd.h>

void write_stuff(int i, char *str)
{

	while (str[i] != '\0' && (str[i] < 9 || str[i] > 13) && str[i] != 32)
	{
		write(1, &str[i], 1);
		i = i + 1;
	}
}

int main(int argc, char **argv)
{
	int	i;
	char	*str;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}		
	i = 0;
	str = argv[1];
	while (str[i] != '\0')
	{
		if (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
			i = i + 1;
		else
		{
			write_stuff(i, str);
			break;
		}
	}
	write (1, "\n", 1);
}