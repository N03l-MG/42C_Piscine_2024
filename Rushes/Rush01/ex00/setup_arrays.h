/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_arrays.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:45:09 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/21 18:08:20 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SETUP_ARRAYS_H
# define SETUP_ARRAYS_H

typedef struct s_hv
{
	int		v[2][4];
	int		h[2][4];
}			t_hv;

static void	parse_up(int *inputnums, int vertical[2][4])
{
	vertical[0][0] = inputnums[0];
	vertical[0][1] = inputnums[1];
	vertical[0][2] = inputnums[2];
	vertical[0][3] = inputnums[3];
}

static void	parse_down(int *inputnums, int vertical[2][4])
{
	vertical[1][0] = inputnums[4];
	vertical[1][1] = inputnums[5];
	vertical[1][2] = inputnums[6];
	vertical[1][3] = inputnums[7];
}

static void	parse_left(int *inputnums, int horizontal[2][4])
{
	horizontal[0][0] = inputnums[8];
	horizontal[0][1] = inputnums[9];
	horizontal[0][2] = inputnums[10];
	horizontal[0][3] = inputnums[11];
}

static void	parse_right(int *inputnums, int horizontal[2][4])
{
	horizontal[1][0] = inputnums[12];
	horizontal[1][1] = inputnums[13];
	horizontal[1][2] = inputnums[14];
	horizontal[1][3] = inputnums[15];
}
#endif
/*
void	test_arrays(int vertical[2][4], int horizontal[2][4])
{
	printf("Vertical Array:\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", vertical[i][j]);
		}
		printf("\n");
	}
	printf("\nHorizontal Array:\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", horizontal[i][j]);
		}
		printf("\n");
	}
}
*/
