/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:07:33 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/24 02:48:42 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	save_numbers(char **split, int **arr, int *count)
{
	int	j;

	j = 0;
	while (split[j])
	{
		if (check_flag(split[j]))
		{
			j += 1;
			continue ;
		}
		(*arr)[(*count)++] = ft_atoi(split[j]);
		j += 1;
	}
}

static int	splitting_operation(int **arr, char *string, int *count)
{
	char	**split;

	split = ft_split(string, ' ');
	if (!split)
		return (0);
	save_numbers(split, arr, count);
	free_split(split);
	return (1);
}

int	parsing(int argc, char **string, int **arr)
{
	int	result;
	int	i;
	int	count;

	result = normalization(argc, string);
	if (!result)
		return (0);
	*arr = malloc(result * sizeof(int));
	if (!(*arr))
		return (0);
	count = 0;
	i = 1;
	while (i < argc)
	{
		if (!splitting_operation(arr, string[i++], &count))
		{
			free(*arr);
			return (0);
		}
	}
	if (!check_duplicates(*arr, result))
		return (free(*arr), 0);
	return (result);
}
