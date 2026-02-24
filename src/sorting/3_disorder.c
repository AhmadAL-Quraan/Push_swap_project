/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_disorder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 00:20:11 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/24 00:20:12 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

float	disorder_metric(int *arr, int size)
{
	int	total_pairs;
	int	mistakes;
	int	i;
	int	j;

	i = 0;
	total_pairs = 0;
	mistakes = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			total_pairs += 1;
			if (arr[i] > arr[j])
			{
				mistakes += 1;
			}
			j += 1;
		}
		i += 1;
	}
	return ((float)mistakes / total_pairs);
}
