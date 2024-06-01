#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_length(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i = i + 1;
	}

	return (i);
}

int concatenate_final_string(int index_of_final_string, char *str, char *final_string)
{
	int i = 0;
	while (str[i] != '\0')
	{
		final_string[index_of_final_string] = str[i];
		i = i + 1;
		index_of_final_string = index_of_final_string + 1;
	}

	return index_of_final_string;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int	number_of_chars = 0;
	char *final_string;
	int index_of_final_string;

	int i = 0;

	while(i < size)
	{
		number_of_chars += count_length(strs[i]);
		i = i + 1;
	}

	number_of_chars = number_of_chars + (count_length(sep) * (size - 1));
	final_string = malloc((sizeof(char) * number_of_chars) + 1);
	final_string[number_of_chars] = '\0';

	index_of_final_string = 0;
	i = 0;
	while(i < size)
	{
		index_of_final_string = concatenate_final_string(index_of_final_string, strs[i], final_string);
		if (i < size - 1)
		{
			index_of_final_string = concatenate_final_string(index_of_final_string, sep, final_string);			
		}
		i = i + 1;
	}

	return final_string;

}

// int main(int argc, char **argv)
// {
// 	char *sep = ",";
// 	char *final_string =  ft_strjoin(argc, argv, sep);
// 	printf("%s \n", final_string);
// 	printf("%lu \n", strlen(final_string));
// }