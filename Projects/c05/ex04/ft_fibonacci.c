/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:05:29 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/25 17:36:50 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	if (index == 1 || index == 2)
		return (1);
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (res);
}
/*
// The better one, but we can't use variable-size arrays.
int	fibonacci_dynamic(int index)
{
	int	fib[index];
	int	i;

	fib[0] = 0;
	fib[1] = 1;
	i = 2;
	while (i < index)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		i++;
	}
	return (fib[index - 1]);
}

int main()
{
	printf("%d", ft_fibonacci(50));
	//printf("%d", fibonacci_dynamic(70));
}
*/
