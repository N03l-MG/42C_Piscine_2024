/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 22:45:40 by nmonzon           #+#    #+#             */
/*   Updated: 2024/05/01 16:18:52 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		ret = s1[i] - s2[i];
		if (ret != 0)
		{
			break ;
		}
		i++;
	}
	if (s1[i] == '\0' || s2[i] == '\0')
	{
		ret = s1[i] - s2[i];
	}
	return (ret);
}

void	swap_stuff(char *c[], int j)
{
	char	*buffer;

	buffer = c[j];
	c[j] = c[j + 1];
	c[j + 1] = buffer;
}

void	bubble_sort(char *c[], int size)
{
	int		i;
	int		j;
	int		swap;

	i = 0;
	swap = 1;
	while (i < size - 1)
	{
		swap = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(c[j], c[j + 1]) > 0)
			{
				swap_stuff(c, j);
				swap = 1;
			}
			j++;
		}
		if (swap == 0)
			break ;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	bubble_sort(argv + 1, argc - 1);
	while (argv[i])
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
	return (0);
}
