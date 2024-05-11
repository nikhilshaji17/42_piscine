/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:53:12 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/08 13:53:14 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	answer;
	int	i;

	answer = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		answer = answer * i;
		i = i + 1;
	}
	return (answer);
}
