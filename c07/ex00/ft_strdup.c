/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:39:00 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/14 13:39:08 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_length(char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
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

	ptr = (char *)malloc(sizeof(char) * (count_length(src) + 1));
	ptr = dup_string(ptr, src);
	return (ptr);
}
