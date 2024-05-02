/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:37:03 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/28 21:41:57 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	parse_dict(t_word_arrays *output, char *dict_name)
{
	int				fd;
	int				i;
	unsigned long	bytes_read;
	char			buffer[1];
	int				boolean;
	char			number[100];
	char			numword[100];

	boolean = 0;
	i = 0;
	number[0] = '\0';
	numword[0] = '\0';
	fd = open(dict_name, O_RDONLY);
	bytes_read = read(fd, buffer, 1);
	while (bytes_read > 0)
	{
		if (buffer[0] != ' ')
		{
			if (buffer[0] == ':')
			{
				boolean = 1;
				number[i] = '\0';
				i = 0;
			}
			else if (buffer[0] == '\n')
			{
				boolean = 0;
				numword[i] = '\0';
				i = 0;
				if (number[0] == '\0' && numword[0] == '\0')
				{
					bytes_read = read(fd, buffer, 1);
					continue ;
				}
				else if (number[0] == '\0' || numword[0] == '\0')
				{
					write(1, "Dict Error\n", 12);
					return (1);
				}
				populate_arrays(output, number, numword);
				number[0] = '\0';
				numword[0] = '\0';
			}
			else
			{
				if (boolean == 0)
					number[i++] = buffer[0];
				else
					numword[i++] = buffer[0];
			}
		}
		bytes_read = read(fd, buffer, 1);
	}
	return (0);
}

void	populate_arrays(t_word_arrays *arrays, char *number, char *numword)
{
	long long	n;

	n = ft_atoi(number);
	if (n == 0)
		ft_strcpy(arrays->zero, numword);
	else if (n < 10)
	{
		ft_strcpy(arrays->ones_words[n], numword);
	}
	else if (n < 20)
		ft_strcpy(arrays->teens_words[n - 10], numword);
	else if (n < 100 && n % 10 == 0)
	{
		n /= 10;
		ft_strcpy(arrays->tens_words[n], numword);
	}
	else
	{
		find_thousand(arrays, numword, n);
	}
}

void	find_thousand(t_word_arrays *arrays, char *numword, long n)
{
	int			i;
	long long	thousand;

	i = 0;
	thousand = 1000;
	while (i < 12)
	{
		if (n == thousand)
		{
			ft_strcpy(arrays->powers_of_ten[i + 1], numword);
			break ;
		}
		thousand *= 1000;
		i++;
	}
}
