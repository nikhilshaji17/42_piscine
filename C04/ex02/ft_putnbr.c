/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:28:18 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/07 16:28:20 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(unsigned int num)
{
	char	digit;

	if (num <= 0)
		return ;
	else
	{
		digit = '0' + num % 10;
		print_num(num / 10);
		write(1, &digit, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		print_num(nb * -1);
	}
	else
	{
		print_num(nb);
	}
}
