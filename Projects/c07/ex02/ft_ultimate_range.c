/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:23:19 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/29 18:28:05 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	j;

	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	j = 0;
	while (i >= min && i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (j);
}
/*
#include <stdio.h>
int	main()
{
	int start, end;
	int *numbers;
	start = 2;
	end = 9;
	int result = ft_ultimate_range(&numbers, start, end);
	printf("%d\n", result);
	for (int n = 0; n < end - start ; n++)
		printf("%d ", numbers[n]);
	if (numbers != NULL)
	{
		free(numbers);
	}
}
*/
