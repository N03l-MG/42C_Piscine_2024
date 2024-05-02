/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:56:49 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/29 09:47:53 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strdup(char *str)
{
	unsigned int	len;
	char			*dup;

	len = ft_strlen(str);
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dup, str);
	return (dup);
}
/*
#include <stdio.h>
int	main()
{
	char	*str;
	char	*dupe;

	str = "test string!\n";
	dupe = ft_strdup(str);
	printf("%s", dupe);
	free(dupe);
}
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
