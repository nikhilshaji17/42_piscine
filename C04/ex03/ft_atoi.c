/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:28:29 by nkunnath          #+#    #+#             */
/*   Updated: 2024/05/07 16:28:30 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_character(int i, char *str, int flag)
{
	if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		if (i == 0 || str[i - 1] == 32
			|| (str[i - 1] >= 9 && str[i - 1] <= 13))
			return (flag * 1);
	}
	else if (str[i] == 45)
	{
		if (i == 0 || str[i - 1] == '+'
			|| str[i - 1] == '-' || str[i - 1] == 32
			|| (str[i - 1] >= 9 && str[i - 1] <= 13))
			return (flag * -1);
	}
	else if (str[i] == 43)
	{
		if (i == 0 || str[i - 1] == '+'
			|| str[i - 1] == '-' || str[i - 1] == 32
			|| (str[i - 1] >= 9 && str[i - 1] <= 13))
			return (flag * 1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	answer;
	int	flag;
	int	temp_sign;

	i = 0;
	answer = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			temp_sign = verify_character(i, str, flag);
			if (temp_sign == 0)
				return (answer * flag);
			else
				flag = temp_sign;
		}
		else
		{
			answer = (answer * 10) + str[i] - '0';
		}
		i = i + 1;
	}
	return (answer * flag);
}
