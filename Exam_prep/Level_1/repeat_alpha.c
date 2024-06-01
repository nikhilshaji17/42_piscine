#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int ascii[256];
	int i;
	int counter;
	int num_of_times;
	char current_char;

	i = 0;
	num_of_times = 0;
	counter = 1;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < 256)
	{
		ascii[i] = 1;
		i = i + 1;
	}

	i = 65;
	while (i <= 90)
	{
		ascii[i] = counter;
		i = i + 1;
		counter = counter + 1;
	}
	
	i = 97;
	counter = 1;
	while (i <= 122)
	{
		ascii[i] = counter;
		i = i + 1;
		counter = counter + 1;
	}

	int j = 0;
	i = 0;
	while (argv[1][i] != '\0')
	{
		current_char = argv[1][i];
		num_of_times = ascii[current_char];
		j = 0;
		while (j < num_of_times)
		{
			// printf("We have reached here");
			write(1, &argv[1][i], 1);
			j = j + 1;
		}	
		i = i + 1;
	}
	write(1, "\n", 1);
}