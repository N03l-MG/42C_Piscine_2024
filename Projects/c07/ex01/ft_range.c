/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:38:48 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/29 10:13:36 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	len = max - min;
	if (len <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * len);
	i = min;
	while (i < max)
	{
		arr[i - min] = i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	main()
{
	int	start,end;
	start = 10;
	end = 20;
	int	*numrange = ft_range(start, end);
	for (int i = 0; i < end - start; i++)
	{
		printf("%d ", numrange[i]);
	}
	printf("\n");
	free (numrange);
	return 0;
}
*/
