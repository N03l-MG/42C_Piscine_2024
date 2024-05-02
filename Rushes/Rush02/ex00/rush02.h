/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmonzon <nmonzon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:43:10 by nmonzon           #+#    #+#             */
/*   Updated: 2024/04/28 22:14:42 by nmonzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_word_arrays
{
	char	*zero;
	char	**ones_words;
	char	**teens_words;
	char	**tens_words;
	char	**powers_of_ten;
}	t_word_arrays;

long long	ft_atoi(char *str);
int			ft_strlen(char *str);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strcat(char *dest, char *src);
char		*ft_strdup(char *str);
int			numcheck(char *str);
void		allocate_memory(t_word_arrays *arrays);
void		allocate_array(char *array[], int size);
void		free_memory(t_word_arrays *arrays);
int			parse_dict(t_word_arrays *output, char *dict_name);
void		populate_arrays(t_word_arrays *arrays, char *number, char *numword);
void		find_thousand(t_word_arrays *arrays, char *numword, long n);
void		ntow(long long n, char **result, t_word_arrays *arrays);
void		remove_space(char *result);
int			run_everything(t_word_arrays *arrays, char *dict_name,
				char *numstring, char *result);

#endif
