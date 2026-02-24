/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_normalization.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:54:11 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/24 01:35:11 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/*
 Check flags, check long long, check characters, count how many numbers
 *
 */

static void	normalize_spaces(char *string)
{
	int	idx;

	idx = 0;
	while (string[idx])
	{
		if (string[idx] == '\n' || string[idx] == '\t' || string[idx] == '\v'
			|| string[idx] == '\f' || string[idx] == '\r')
			string[idx] = ' ';
		idx += 1;
	}
}

static int	check_sign(char *string, int *idx, int *count_digit)
{
	int	count_neg;
	int	count_pos;

	count_neg = 0;
	count_pos = 0;
	while (string[(*idx)] == '-' || string[(*idx)] == '+')
	{
		(*count_digit) += 1;
		if (string[(*idx)] == '-')
			count_neg += 1;
		if (string[(*idx)] == '+')
			count_pos += 1;
		(*idx) += 1;
	}
	if (count_neg > 1 || count_pos > 1 || (count_neg == 1 && count_pos == 1))
		return (0);
	return (1);
}

static int	check_string(char *string)
{
	int			idx;
	int			count_digit;
	long long	number;

	idx = 0;
	count_digit = 0;
	if (!check_sign(string, &idx, &count_digit))
		return (0);
	while (string[idx])
	{
		count_digit += 1;
		if (!(string[idx] >= '0' && string[idx] <= '9') || count_digit > 11)
		{
			return (0);
		}
		idx += 1;
	}
	number = ft_atoll(string);
	if (number < -2147483648 || number > 2147483647)
		return (0);
	return (1);
}

static int	count_valid_int(char **split, int *count)
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
		else if (check_string(split[j]))
			(*count) += 1;
		else
			return (0);
		j += 1;
	}
	return (1);
}

int	normalization(int argc, char **string)
{
	int		i;
	char	**split;
	int		count;

	i = 1;
	count = 0;
	while (i < argc)
		normalize_spaces(string[i++]);
	i = 1;
	while (i < argc)
	{
		split = ft_split(string[i], ' ');
		if (!split)
			return (0);
		if (!count_valid_int(split, &count))
		{
			free_split(split);
			return (0);
		}
		free_split(split);
		i += 1;
	}
	return (count);
}
