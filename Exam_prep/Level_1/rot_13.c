#include <unistd.h>

int main(int argc, char **argv)
{
	int	current_char;
	int	to_convert;
	int i = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (argv[1][i] != '\0')
	{
		current_char = argv[1][i];
		if (current_char >= 'a' && current_char <= 'z')
		{
			to_convert = current_char + 13;
			if (to_convert > 'z')
			{
				to_convert = to_convert - 26;
			}
			write(1, &to_convert, 1);
		}
		else if (current_char >= 'A' && current_char <= 'Z')
		{
			to_convert = current_char + 13;
			if (to_convert > 'Z')
			{
				to_convert = to_convert - 26;
			}
			write(1, &to_convert, 1);
		}
		else
		{
			write(1, &current_char, 1);
		}
		i = i + 1;
	}
	write(1, "\n", 1);
}