/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:34:56 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/29 22:02:54 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// bubble sort
void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	buffer;
	int	swap;

	swap = 1;
	while (swap != 0)
	{
		swap = 0;
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				buffer = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = buffer;
				swap--;
			}
			j++;
		}
	}
}

int	main(void)
{
	int array[10] = {5, 8, 1, 4, 6, 0, 9, 2, 3, 7};
	int	*p_arr;

	p_arr = array;
	ft_sort_int_tab(p_arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

