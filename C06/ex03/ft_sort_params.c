/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:00:56 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/08 14:00:58 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

void	print_args(int argc, char **argv)
{
	int	k;
	int	j;

	k = 1;
	j = 0;
	while (k < argc)
	{
		j = 0;
		while (argv[k][j] != '\0')
		{
			write(1, &argv[k][j], 1);
			j = j + 1;
		}
		write(1, "\n", 1);
		k = k + 1;
	}
}

void	compare_strings(int number, char **argv, int i)
{
	char	*temp;

	while (number > 0)
	{
		i = 2;
		while (i < number)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				temp = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = temp;
			}
			i++;
		}
		number = number - 1;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	number;

	i = 2;
	j = 0;
	number = argc;
	if (argc <= 1)
		return (0);
	else if (argc == 2)
	{
		while (argv[1][j] != '\0')
		{
			write(1, &argv[1][j], 1);
			j = j + 1;
		}
		return (0);
	}
	else
		compare_strings(number, argv, 2);
	print_args(argc, argv);
}
