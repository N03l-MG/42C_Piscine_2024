/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:53:56 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/21 17:06:17 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup_arrays.h"
#include <unistd.h>

// parsing functions
void	input_to_int_array(char *inputstr, int *inputnums, int *error);
void	check_num_array(int *inputnums, int *error);
int		display_error(int *error);
// array organization functions (in Setup_Arrays.h)
void	parse_up(int *inputnums, int vertical[2][4]);
void	parse_down(int *inputnums, int vertical[2][4]);
void	parse_left(int *inputnums, int horizontal[2][4]);
void	parse_right(int *inputnums, int horizontal[2][4]);
void	sort(int vertical[2][4], int horizontal[2][4], t_hv parsed_values);

t_hv	parse(char *inputstr)
{
	int		error;
	int		inputnums[16];
	int		vertical[2][4];
	int		horizontal[2][4];
	t_hv	parsed_values;

	error = 0;
	input_to_int_array(inputstr, inputnums, &error);
	check_num_array(inputnums, &error);
	if (error != 0)
	{
		display_error(&error);
	}
	parse_up(inputnums, vertical);
	parse_down(inputnums, vertical);
	parse_left(inputnums, horizontal);
	parse_right(inputnums, horizontal);
	sort(vertical, horizontal, parsed_values);
	return (parsed_values);
}

void	input_to_int_array(char *inputstr, int *inputnums, int *error)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (inputstr[i] != '\0')
	{
		if (inputstr[i] != ' ')
		{
			if ((inputstr[i + 1] == ' ' || inputstr[i + 1] == '\0')
				&& (inputstr[i] >= '1' && inputstr[i] <= '4'))
			{
				inputnums[j] = inputstr[i] - '0';
				j++;
			}
			else
			{
				*error = display_error(error);
				break ;
			}
		}
		i++;
	}
}

void	check_num_array(int *inputnums, int *error)
{
	int	n;

	n = 0;
	while (n < 16)
	{
		if (inputnums[n] == 0)
		{
			*error = display_error(error);
			break ;
		}
		n++;
	}
}

void	sort(int vertical[2][4], int horizontal[2][4], t_hv parsed_values)
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			parsed_values.v[i][j] = vertical[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			parsed_values.h[i][j] = horizontal[i][j];
			j++;
		}
		i++;
	}
}
