#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int lower = 122;
	int upper = 90;
	int ascii[256];
	char letter;

	i = 65;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (i <= 90)
	{
		ascii[i] = upper;
		i = i + 1;
		upper = upper - 1;
	}

	i = 97;
	while (i <= 122)
	{
		ascii[i] = lower;
		i = i + 1;
		lower = lower - 1;
	}

	i = 0;
	while(argv[1][i] != '\0')
	{
		if (argv[1][i] >= 65 && argv[1][i] <= 90)
		{
			letter = ascii[argv[1][i]];
			argv[1][i] = letter;
		}
		else if (argv[1][i] >= 97 && argv[1][i] <= 122)
		{
			letter = ascii[argv[1][i]];
			argv[1][i] = letter;
		}
		write(1, &argv[1][i], 1);
		i = i + 1;
	}	
	write(1, "\n", 1);
}