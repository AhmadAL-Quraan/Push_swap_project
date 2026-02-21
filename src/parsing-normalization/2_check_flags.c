/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_check_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:07:41 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 03:08:02 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	check_num_of_flag(char **string, t_flags *flags)
{
	int	cnt;

	cnt = 0;
	if (flags->adaptive == 1)
		cnt += 1;
	if (flags->complex == 1)
		cnt += 1;
	if (flags->simple == 1)
		cnt += 1;
	if (flags->bench == 1)
		cnt += 1;
	if (flags->medium == 1)
		cnt += 1;
	if (flags->counter)
		cnt += 1;
	if (cnt == 1 && flags->adaptive != 1)
		flags->adaptive = 0;
	if (cnt > 1)
		return (0);
	return (1);
}

int	check_flags(char **string, t_flags *flags)
{
	int	idx;

	idx = 0;
	while (string[idx] != NULL)
	{
		if (ft_strcmp(string[idx], "--bench") == 0)
			flags->bench = 1;
		if (ft_strcmp(string[idx], "--complex") == 0)
			flags->complex = 1;
		if (ft_strcmp(string[idx], "--adaptive") == 0)
			flags->adaptive = 1;
		if (ft_strcmp(string[idx], "--medium") == 0)
			flags->medium = 1;
		if (ft_strcmp(string[idx], "--simple") == 0)
			flags->simple = 1;
		if (ft_strcmp(string[idx], "--counter") == 0)
			flags->counter = 1;
		idx += 1;
	}
	return (check_num_of_flag(string, flags));
}
