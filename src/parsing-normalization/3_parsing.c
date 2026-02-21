/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:07:33 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 07:10:29 by aqoraan          ###   ########.fr       */
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

int	parsing(int argc, char **string, int **arr)
{
	int		result;
	int		i;
	char	**split;
	int		j;
	int		count;

	result = normalization(argc, string);
	if (result == 0)
		return (0);
	*arr = malloc(result * sizeof(int));
	count = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(string[i], ' ');
		save_numbers(split, arr, &count);
		free_split(split);
		i += 1;
	}
	if (!check_duplicates(*arr))
	{
		free(*arr);
		return (0);
	}
	return (result);
}
