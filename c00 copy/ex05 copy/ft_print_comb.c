/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:35:33 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/01 17:51:34 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(int digit_one, int digit_two, int digit_three)
{
	digit_one = digit_one + '0';
	digit_two = digit_two + '0';
	digit_three = digit_three + '0';
	write(1, &digit_one, 1);
	write(1, &digit_two, 1);
	write(1, &digit_three, 1);
	if (digit_one == '7' && digit_two == '8')
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	digit_one;
	int	digit_two;
	int	digit_three;

	digit_one = 0;
	digit_two = 1;
	digit_three = 2;
	while (digit_one <= 9)
	{
		while (digit_two <= 9)
		{
			while (digit_three <= 9)
			{
				print_digits(digit_one, digit_two, digit_three);
				digit_three = digit_three + 1;
			}
			digit_two = digit_two + 1;
			digit_three = digit_two + 1;
		}
		digit_one = digit_one + 1;
		digit_two = digit_one + 1;
		digit_three = digit_two + 1;
	}
}
