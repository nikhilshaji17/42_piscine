#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int answer;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}

	if (argv[2][0] == '*')
	{
		answer = atoi(argv[1]) * atoi(argv[3]);	
	}
	else if (argv[2][0] == '/')
	{
		answer = atoi(argv[1]) / atoi(argv[3]);
	}
	else if (argv[2][0] == '+')
	{
		answer = atoi(argv[1]) + atoi(argv[3]);
	}
	else if (argv[2][0] == '-')
	{
		answer = atoi(argv[1]) - atoi(argv[3]);
	}
	else if (argv[2][0] == '%')
	{
		answer = atoi(argv[1]) % atoi(argv[3]);
	}

	printf("%i \n", answer);
}