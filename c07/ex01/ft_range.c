/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:46:49 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/14 13:46:51 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	numbers;
	int	*array;
	int	i;

	i = 1;
	if (min >= max)
	{
		return (NULL);
	}
	numbers = max - min;
	array = (int *)malloc(sizeof(int) * numbers);
	array[0] = min;
	while (i < numbers)
	{
		array[i] = array[i - 1] + 1;
		i = i + 1;
	}
	return (array);
}

int main(void)
{
	int *array = ft_range(2,9);
	printf("%i", array[0]);
	printf("%i", array[1]);

}