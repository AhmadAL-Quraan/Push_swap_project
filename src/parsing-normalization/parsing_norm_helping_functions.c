/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_norm_helping_functions.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:07:59 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 07:09:18 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i += 1;
	}
	free(split);
}

int	check_flag(char *string)
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

int	check_duplicates(int *arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (arr[i] == arr[j])
				return (0);
			j += 1;
		}
		i += 1;
	}
	return (1);
}

long long	ft_atoll(const char *nptr)
{
	int			i;
	int			sign;
	long long	res;

	sign = 1;
	res = 0;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i += 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return ((long long)(res * sign));
}
