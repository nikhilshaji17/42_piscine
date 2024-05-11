/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:00:21 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/08 14:00:23 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i > 0)
	{
		i = i - 1;
	}
	while (argv[0][i] != '\0')
	{
		i = i + 1;
	}
	write(1, argv[0], i);
	write(1, "\n", 1);
}
