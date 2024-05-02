/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:20:45 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/28 12:00:22 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

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
