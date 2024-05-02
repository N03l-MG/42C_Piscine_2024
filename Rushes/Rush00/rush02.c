/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:39:27 by ndziadzi          #+#    #+#             */
/*   Updated: 2024/04/14 17:13:04 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_putchar.c"

// picking the correct character and checking if dimensions are out of bounds

void	choose_character(int row, int col, int x, int y);
void	overload_failsafe(int x, int y);

// rectangle with specific h = height and w = width

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	overload_failsafe(x, y);
	while (row < y)
	{
		while (col < x)
		{
			choose_character(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		col = 0;
		row++;
	}
}

void	choose_character(int row, int col, int x, int y)
{
	if ((row == 0 && col == 0) || (row == 0 && col == x - 1))
	{
		ft_putchar('A');
	}
	else if ((row == y - 1 && col == 0) || (row == y - 1 && col == x - 1))
	{
		ft_putchar('C');
	}
	else if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	overload_failsafe(int x, int y)
{
	if (y >= 2147483647 || x >= 2147483647)
	{
		write(1, "ERROR: too large!", 17);
	}
	else if (y < 0 || x < 0)
	{
		write(1, "ERROR: too small!", 17);
	}
}
