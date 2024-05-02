/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:01:52 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/23 18:45:22 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				ret;

	i = 0;
	ret = 0;
	if (n < 1)
	{
		return (0);
	}
	while (n-- && (s1[i] != '\0' && s2[i] != '\0'))
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
	int		length;
	int		r;

	str1 = "ABCDEF";
	str2 = "abcdef";
	length = 8;
	r = ft_strncmp(str1, str2, length);
	printf("%d", r);
	return (0);
}
*/
