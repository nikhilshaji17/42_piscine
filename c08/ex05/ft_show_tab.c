/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:35:47 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/20 13:35:50 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (par == NULL)
		return ;
	while (par[i].str != 0)
	{
		write(1, &par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, &par[i].copy, par[i].size);
		write(1, "\n", 1);
		i = i + 1;
	}
}
