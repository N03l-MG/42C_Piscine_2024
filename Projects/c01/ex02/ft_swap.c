/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:23:41 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/16 15:19:45 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}
*/
