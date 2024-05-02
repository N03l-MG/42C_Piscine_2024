/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:03:32 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/28 19:02:21 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_atoi(char *str)
{
	long long	result;
	int			sign;
	int			i;
	int			counter;

	result = 0;
	sign = 1;
	i = 0;
	counter = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			counter++;
		i++;
	}
	if (counter % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
