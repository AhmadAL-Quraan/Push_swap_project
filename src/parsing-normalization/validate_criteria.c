/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_criteria.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 00:43:55 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/19 01:30:16 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Libft-project/libft.h"
#include "../../push_swap.h"

static int	check_flag(char *string)
{
	if (ft_strcmp(string, "--bench") == 0)
	{
		return (1);
	}
	if (ft_strcmp(string, "--simple") == 0)
	{
		return (1);
	}
	if (ft_strcmp(string, "--complex") == 0)
	{
		return (1);
	}
	if (ft_strcmp(string, "--medium") == 0)
	{
		return (1);
	}
	if (ft_strcmp(string, "--adaptive") == 0)
	{
		return (1);
	}
	return (0);
}

int	validate_criteria(int argc, char **string, int *arr)
{
	int		i;
	char	**split;
	int		j;
	int		count;
	int		*num_convert;

	i = 1;
	j = 0;
	count = 0;
	while (i < argc)
	{
		split = ft_split(string[i], ' ');
		j = 0;
		while (split[j])
		{
			if (check_flag(split[j]))
			{
				j += 1;
				continue ;
			}
		}
	}
}
