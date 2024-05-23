/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:47:03 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/14 13:47:04 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	numbers;
	int	*array;
	int	i;

	i = 1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	numbers = max - min;
	array = (int *)malloc(sizeof(int) * numbers);
	array[0] = min;
	while (i < numbers)
	{
		array[i] = array[i - 1] + 1;
		i = i + 1;
	}
	*range = array;
	return (i);
}
