/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:30:37 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/28 10:52:31 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//int	binary_search_sqrt(int nb);

float	recursive_power(float base, float power)
{
	if (power == 0)
		return (1);
	else
		return (base * recursive_power(base, power - 1));
}

int	ft_sqrt(int nb)
{
	int	half;
	int	res;

	half = 1;
	while (recursive_power(half, 2) <= nb)
	{
		half++;
	}
	res = half - 1;
	if (res * res == nb)
	{
		return (res);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	printf("%d", binary_search_sqrt(1522756));
// }

// using binary search algorithm, which is even better and precise lol
// int	binary_search_sqrt(int nb)
// {
// 	int	start;
// 	int	end;
// 	int	res;
// 	int	mid;

// 	if (nb == 0)
// 	{
// 		return (0);
// 	}
// 	start = 1;
// 	end = nb;
// 	while (start < end)
// 	{
// 		mid = start + (end - start) / 2;
// 		if (mid <= nb / mid)
// 		{
// 			res = mid;
// 			start = mid + 1;
// 		}
// 		else
// 		{
// 			end = mid - 1;
// 		}
// 	}
// 	return (res);
// }
