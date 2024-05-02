/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:15:40 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/16 00:17:35 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*first;
	int	*last;
	int	temp;

	first = tab;
	last = tab + size - 1;
	while (first < last)
	{
		temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
}
/*
int	main(void)
{
	int	nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	*p_nums;

	p_nums = nums;
	ft_rev_int_tab(p_nums, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%d", p_nums[i]);
	}
	printf("\n");
}
*/
