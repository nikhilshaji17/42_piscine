/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:47:12 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/14 13:47:13 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_length(char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

int	find_size(int size, int size_of_separator, char **strs)
{
	int	i;
	int	total_chars;

	total_chars = 0;
	i = 0;
	while (i < size)
	{
		total_chars += count_length(strs[i]);
		if (i != size - 1)
		{
			total_chars += size_of_separator;
		}
		i = i + 1;
	}
	return (total_chars);
}

char	*concat_each_string(char *final_string, char *string_to_add)
{
	int	i;
	int	current_position;

	i = 0;
	current_position = count_length(final_string);
	while (string_to_add[i] != '\0')
	{
		final_string[current_position] = string_to_add[i];
		i = i + 1;
		current_position = current_position + 1;
	}
	return (final_string);
}

char	*perform_concat(int size, char *final_string, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		final_string = concat_each_string(final_string, strs[i]);
		if (i != size - 1)
		{
			final_string = concat_each_string(final_string, sep);
		}
		i = i + 1;
	}
	return (final_string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_chars;
	int		size_of_separator;
	int		final_string_terminator;
	char	*final_string;

	total_chars = 0;
	size_of_separator = count_length(sep);
	if (size <= 0)
	{
		final_string = (char *)malloc(1);
		final_string = "\0";
		return (final_string);
	}
	total_chars = find_size(size, size_of_separator, strs);
	total_chars = total_chars + 1;
	final_string = (char *)malloc(sizeof(char) * total_chars);
	final_string = perform_concat(size, final_string, strs, sep);
	final_string_terminator = count_length(final_string);
	final_string[final_string_terminator] = '\0';
	return (final_string);
}
