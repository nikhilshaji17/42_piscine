#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}

	int i = 0;
	char current_letter = argv[2][0];
	char replacement = argv[3][0];

	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == current_letter)
		{
			argv[1][i] = replacement;
		}
		write(1, &argv[1][i], 1);
		i = i + 1;
	}
	write(1, "\n", 1);
	return (0);
}