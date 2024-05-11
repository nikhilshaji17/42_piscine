/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:54:01 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/08 13:54:03 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	binary_search(int left, int right, int nb)
{
	long	mid;

	mid = (left + right) / 2;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
		{
			right = mid - 1;
		}
		else if (mid * mid < nb)
		{
			left = mid + 1;
		}
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	int	answer;
	int	left;
	int	right;

	left = 1;
	right = nb;
	answer = 0;
	if (nb <= 0)
		return (answer);
	answer = binary_search(left, right, nb);
	return (answer);
}
