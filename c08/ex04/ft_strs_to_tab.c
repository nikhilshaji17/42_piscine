/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:33:53 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/20 13:33:57 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

// typedef struct s_stock_str
// {
// 	int size;
// 	char *str;
// 	char *copy;
// } t_stock_str;

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter += 1;
	}
	return (counter);
}

char	*dup_string(char *ptr, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i = i + 1;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	ptr = dup_string(ptr, src);
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*temp;

	i = 0;
	temp = malloc(sizeof(t_stock_str) * (ac + 1));
	if (temp == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		temp[i].size = ft_strlen(av[i]);
		temp[i].str = av[i];
		temp[i].copy = ft_strdup(av[i]);
		i = i + 1;
	}
	temp[i].size = 0;
	temp[i].str = 0;
	temp[i].copy = 0;
	return (temp);
}
