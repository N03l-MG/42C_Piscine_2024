/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:59:11 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/29 11:04:59 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		found_index;

	i = 0;
	j = 0;
	found_index = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (j == 0)
				found_index = i;
			j++;
			if (to_find[j] == '\0')
				return (str + found_index);
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str;
	char	*find;
	str = "renato";
	find = "enat";
	printf("%s\n", ft_strstr(str, find));
	return (0);
}
*/
