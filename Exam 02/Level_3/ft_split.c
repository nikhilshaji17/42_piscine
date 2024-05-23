#include <stdlib.h>
#include <stdio.h>

int find_no_of_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i = i + 1;
		if (str[i] != '\0')
			count = count + 1;
		while (str[i] != '\0' && str[i] != 32 && (str[i] < 9 || str[i] > 13))
			i = i + 1;
	}
	return count;
}

void malloc_each_string(char *str, char **final_array)
{
	int i;
	int length;
	int index_of_final_array;

	i = 0;
	length = 0;
	index_of_final_array = 0;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i = i + 1;
		length = 0;
		while (str[i] != '\0' && str[i] != 32 && (str[i] < 9 || str[i] > 13))
		{
			i = i + 1;
			length = length + 1;
		}
		final_array[index_of_final_array] = malloc((sizeof(char) * length) + 1);
		index_of_final_array += 1;
	}
	final_array[index_of_final_array] = NULL;
}

void add_words_to_string(char *str, char **final_array)
{
	int i;
	int index_of_final_array;
	int j;

	i = 0;
	index_of_final_array = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		{
			while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
				i = i + 1;
		}
		j = 0;
		while (str[i] != '\0' && str[i] != 32 && (str[i] < 9 || str[i] > 13))
		{
			final_array[index_of_final_array][j] = str[i];
			i = i + 1;
			j = j + 1;
		}
		final_array[index_of_final_array][j] = '\0';
		j = 0;
		index_of_final_array += 1;
	}
}

char    **ft_split(char *str)
{
	int number_of_words;
	char **final_array;

	number_of_words = 0;
	number_of_words = find_no_of_words(str);
	number_of_words += 1; //for null terminator
	final_array = malloc(sizeof(char *) * number_of_words);
	malloc_each_string(str, final_array);
	add_words_to_string(str, final_array);
	return final_array;
}


int main(void)
{
	char **final_array = ft_split("Hello  my name is     Nikhil      ");
	for(int i = 0; i < 5; i++)
	{
		printf("%s \n", final_array[i]);
	}
}