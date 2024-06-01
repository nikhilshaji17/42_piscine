#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int ascii_one[256] = {0};
	int ascii_two[256] = {0};
	int common[256];
	char letter;
	int i = 0;
	int j = 0;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (argv[1][i] != '\0')
	{
		letter = (int)argv[1][i];
		ascii_one[letter] += 1;
		i = i + 1;
	}

	i = 0;
	while (argv[2][i] != '\0')
	{
		letter = (int)argv[2][i];
		ascii_two[letter] += 1;
		i = i + 1;
	}

	i = 0;
	while (i < 256)
	{
		if ((ascii_one[i] >= 1) && (ascii_two[i] >= 1))
		{
			common[i] = 1;
		}
		i = i + 1;
	}

	// printf("%i \n", ascii_one[116]);
	// printf("%i \n", ascii_two[116]);
	// printf("%i \n", common[116]);
	i = 0;
	while (argv[1][i] != '\0')
	{
		// printf("%c \n", argv[1][i]);
		letter = (int)argv[1][i];
		if (common[letter] == 1)
		{
			// printf("Here \n");
			common[letter] = 0;
			write(1, &argv[1][i], 1);
		}
		i = i + 1;
	}
	return (0);
}