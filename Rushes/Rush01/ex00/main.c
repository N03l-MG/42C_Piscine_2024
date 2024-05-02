/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:43:48 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/23 12:43:45 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "setup_arrays.h"

t_hv	parse(char *inputstr);
int		**solve(t_hv parsed_values);
void	display(int **matrix);
int		display_error(int *error);

int	main(int argc, char **argv)
{
	char	*inputstr;
	int		error;

	error = 0;
	if (argc != 2)
	{
		display_error(&error);
		return (0);
	}
	inputstr = argv[1];
	display(solve(parse(inputstr)));
	return (0);
}
