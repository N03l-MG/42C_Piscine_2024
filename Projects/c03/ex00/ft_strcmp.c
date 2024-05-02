/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:11:06 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/23 17:52:13 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		ret = s1[i] - s2[i];
		if (ret != 0)
		{
			break ;
		}
		i++;
	}
	if (s1[i] == '\0' || s2[i] == '\0')
	{
		ret = s1[i] - s2[i];
	}
	return (ret);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	int		r;

	str1 = "abcdef";
	str2 = "";
	r = ft_strcmp(str1, str2);
	printf("%d", r);
	return (0);
}
*/
