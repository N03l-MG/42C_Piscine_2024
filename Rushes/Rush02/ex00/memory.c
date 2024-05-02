/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:54:36 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/28 20:55:02 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	allocate_memory(t_word_arrays *arrays)
{
	arrays->zero = malloc(10);
	arrays->ones_words = malloc(10 * sizeof(char *));
	allocate_array(arrays->ones_words, 10);
	arrays->teens_words = malloc(10 * sizeof(char *));
	allocate_array(arrays->teens_words, 10);
	arrays->tens_words = malloc(10 * sizeof(char *));
	allocate_array(arrays->tens_words, 10);
	arrays->powers_of_ten = malloc(12 * sizeof(char *));
	allocate_array(arrays->powers_of_ten, 12);
}

void	allocate_array(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		array[i] = malloc(100);
		i++;
	}
}

void	free_memory(t_word_arrays *arrays)
{
	int	i;

	i = 0;
	free(arrays->zero);
	while (i < 10)
	{
		free(arrays->ones_words[i]);
		free(arrays->teens_words[i]);
		free(arrays->tens_words[i]);
		i++;
	}
	i = 0;
	while (i < 12)
	{
		free(arrays->powers_of_ten[i]);
		i++;
	}
	free(arrays->ones_words);
	free(arrays->teens_words);
	free(arrays->tens_words);
	free(arrays->powers_of_ten);
}
