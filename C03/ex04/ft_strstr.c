/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 10:31:39 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/05 10:31:41 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_string(char *s1, char *s2, int num)
{
	int	x;
	int	y;

	x = num;
	y = 0;
	while (s2[y] != '\0' && s1[x] != '\0')
	{
		if (s2[y] == s1[x])
		{
			x ++;
			y ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (to_find[0] == '\0')
	{
		return (&str[0]);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			flag = verify_string(str, to_find, i);
			if (flag == 1)
			{
				return (&str[i]);
			}
		}
		i ++;
	}
	return (0);
}
