/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_checker_interface.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:07:49 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/25 07:55:24 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/*
 *
 *  This file check parsing + validation + normalization
 *
 * */

int	start_checker(int argc, char **string, int **arr, t_flags **flags)
{
	int	parse_size;

	(*flags) = malloc(sizeof(t_flags));
	if (!(*flags))
		error();
	(*flags)->bench = 0;
	(*flags)->complex = 0;
	(*flags)->medium = 0;
	(*flags)->simple = 0;
	(*flags)->adaptive = 2;
	parse_size = parsing(argc, string, arr);
	if (!check_flags(string, *flags) || !parse_size)
	{
		free(*flags);
		error();
	}
	return (parse_size);
}
