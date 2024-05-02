/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:35:07 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/21 17:20:32 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup_arrays.h"
#include <stdlib.h>

void	fill_zero(int **matrix);
int		solve_skyscraper(int **matrix, int row, int col);
void	extract_values(t_hv parsed, int v[2][4], int h[2][4]);

int	**solve(t_hv parsed_values)
{
	int	**matrix;
	int	v[2][4];
	int	h[2][4];

	fill_zero(matrix);
	extract_values(parsed_values, v, h);
	for (int i = 0; i < 4; i++)
	{
		matrix[0][i] = v[0][i];
		matrix[4 - 1][i] = v[1][i];
	}
	for (int i = 0; i < 4; i++)
	{
		matrix[i][0] = h[0][i];
		matrix[i][4 - 1] = h[1][i];
	}
	if (solve_skyscraper(matrix, 0, 0))
	{
		return (matrix);
	}
	else
	{
		return (0);
	}
}

void	fill_zero(int **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	extract_values(t_hv parsed, int v[2][4], int h[2][4])
{
	for (int i = 0; i < 4; i++)
	{
		v[0][i] = parsed.v[0][i];
		v[1][i] = parsed.v[1][i];
		h[0][i] = parsed.h[0][i];
		h[1][i] = parsed.h[1][i];
	}
}

int	is_valid(int **matrix, int row, int col, int num)
{
	for (int i = 0; i < 4; i++)
	{
		if (matrix[row][i] == num || matrix[i][col] == num)
		{
			return (0);
		}
	}
	if (row == 0 && matrix[row + 1][col] >= num)
	{
		return (0);
	}
	if (row == 4 - 1 && matrix[row - 1][col] >= num)
	{
		return (0);
	}
	if (col == 0 && matrix[row][col + 1] >= num)
	{
		return (0);
	}
	if (col == 4 - 1 && matrix[row][col - 1] >= num)
	{
		return (0);
	}
	return (1);
}

int	solve_skyscraper(int **matrix, int row, int col)
{
	if (row == 4)
	{
		return (1);
	}
	if (col == 4)
	{
		return (solve_skyscraper(matrix, row + 1, 0));
	}
	if (matrix[row][col] != 0)
	{
		return (solve_skyscraper(matrix, row, col + 1));
	}
	for (int num = 1; num <= 4; num++)
	{
		if (is_valid(matrix, row, col, num))
		{
			matrix[row][col] = num;
			if (solve_skyscraper(matrix, row, col + 1))
			{
				return (1);
			}
			matrix[row][col] = 0;
		}
	}
	return (0);
}
