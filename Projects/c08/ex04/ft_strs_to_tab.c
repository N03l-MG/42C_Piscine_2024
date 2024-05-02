/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:23:53 by nmonzon           #+#    #+#             */
/*   Updated: 2024/05/02 11:53:29 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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

// typedef struct s_stock_str
// {
// 	int		size;
// 	char	*str;
// 	char	*copy;
// }	t_stock_str;

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*string_structs;

	i = 0;
	string_structs = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!string_structs)
		return (NULL);
	while (i < ac)
	{
		string_structs[i].size = ft_strlen(av[i]);
		string_structs[i].str = av[i];
		string_structs[i].copy = ft_strdup(av[i]);
		if (!string_structs[i].copy)
		{
			while (i > 0)
				free(string_structs[--i].copy);
			free(string_structs);
			return (NULL);
		}
		i++;
	}
	string_structs[i].str = NULL;
	return (string_structs);
}
