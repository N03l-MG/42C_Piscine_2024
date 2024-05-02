/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:24:02 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/21 12:24:16 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// my print function

// void ft_print(int x, int y)
// {

// }

// void matrix_one(void);
// {
// 	int matrix1[4] = {col1up, col2up, col3up, col4up};
// }

// void matrix_two(void);
// {
// 	int matrix2[4] = {col1down, col2down, col3down, col4down};
// }

// void matrix_three(void);
// {
// 	int matrix3[4] = {row1left, row2left, row3left, row4left};
// }

// void matrix_four(void);
// {
// 	int matrix4[4] = {row1right, row2right, row3right, row4right};
// }

// void matrix_master(void);
// {
// 	int matrix[4] [4] = {*matrix1, *matrix2, *matrix3, *matrix4}
// }

int	display_error(int *error);

int	side_err(int *v)
{
	int	i;
	int	uno;
	int	tres;

	i = 0;
	uno = 0;
	tres = 0;
	while (i < 4)
	{
		if (v[i] == 1)
		{
			uno++;
		}
		else if (v[i] >= 3)
		{
			tres++;
			if (tres > 2)
			{
				// write(1, "returned 0", 10);
				return (0);
			}
		}
		i++;
	}
	if (uno != 1 || v[0] + v[1] + v[2] + v[3] > 10)
	{
		// write(1, "returned 0", 10);
		return (0);
	}
	// write(1, "returned 1", 10);
	return (1);
}

int	mirror_err(int **v)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (v[0][i] && v[1][i] == 1 || v[0][i] && v[1][i] == 3 || v[0][i] == 4
			&& v[1][i] != 1 || v[0][i] != 1 && v[1][i] == 4)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int	arr[2][4] = {{1, 2, 3, 4}, {4, 3, 1, 2}};

	side_err(arr[1]);
	// if return 0 send to error funciton somehow
}
