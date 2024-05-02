/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:24:43 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/23 11:19:38 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	check_first_lower(char *str, char *newstring, int i);

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	newstring[150];
	char	*p;

	i = 0;
	p = &newstring[0];
	while (str[i] != '\0')
	{
		if ((i == 0) || (str[i - 1] == ' ') || (!(str[i - 1] >= 'A' && str[i
						- 1] <= 'Z') && !(str[i - 1] >= 'a' && str[i - 1] <= 'z'
				)))
			check_first_lower(str, newstring, i);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			newstring[i] = str[i] + 32;
		else
			newstring[i] = str[i];
		i++;
	}
	newstring[i] = '\0';
	return (p);
}

void	check_first_lower(char *str, char *newstring, int i)
{
	if ((str[i] >= 'a') && (str[i] <= 'z'))
	{
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			newstring[i] = str[i];
		else
			newstring[i] = str[i] - 32;
	}
	else
	{
		newstring[i] = str[i];
	}
}
/*
int	main(void)
{
	char	*string;

	string = "Salut, comment tu vas ? 42mots Quarante-deux; cinquANte+et+uN";
	printf("%s\n", ft_strcapitalize(string));
}
*/
