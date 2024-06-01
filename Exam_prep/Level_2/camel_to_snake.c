#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	char *final_string;
	int i;
	int j;
	int num_of_chars;

	i = 0;
	num_of_chars = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while(argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			num_of_chars += 2;
		else 
			num_of_chars += 1;
		i = i + 1;
	}

	final_string = (char *)malloc((sizeof(char) * num_of_chars) + 1);
	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			final_string[j] = '_';
			j = j + 1;
			final_string[j] = argv[1][i] + 32; 
		}
		else
		{
			final_string[j] = argv[1][i];
		}
		i = i + 1;
		j = j + 1;
	}
	final_string[j] = '\0';
	printf("%s \n", final_string);
	// printf("%lu \n", strlen(final_string));
}