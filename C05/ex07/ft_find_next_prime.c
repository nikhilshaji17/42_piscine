/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:54:17 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/08 13:54:19 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			return (0);
		i = i + 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	flag;

	i = nb;
	flag = 0;
	if (nb <= 1)
		return (2);
	while (!flag)
	{
		flag = ft_is_prime(i);
		if (flag == 1)
			return (i);
		i = i + 1;
	}
	return (0);
}
