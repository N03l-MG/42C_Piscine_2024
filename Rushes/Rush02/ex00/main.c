/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:29:57 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/28 11:29:57 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char *argv[])
{
	char			*result;
	t_word_arrays	*arrays;
	char			*dict_name;
	char			*numstring;

	arrays = malloc(sizeof(t_word_arrays));
	result = malloc(1000);
	if (argc != 2 && argc != 3)
		return (1);
	if (argc == 3)
	{
		dict_name = argv[1];
		numstring = argv[2];
	}
	else
	{
		dict_name = "numbers.dict";
		numstring = argv[1];
	}
	if (numcheck(numstring) != 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (run_everything(arrays, dict_name, numstring, result));
}

int	run_everything(t_word_arrays *arrays, char *dict_name,
		char *numstring, char *result)
{
	int	dict_error;

	allocate_memory(arrays);
	dict_error = parse_dict(arrays, dict_name);
	if (dict_error != 0)
		return (dict_error);
	ntow(ft_atoi(numstring), &result, arrays);
	write(1, result, ft_strlen(result));
	write(1, "\n", sizeof("\n"));
	free_memory(arrays);
	free(arrays);
	return (0);
}

int	numcheck(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
