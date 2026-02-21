/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 02:05:15 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 07:17:11 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	swap(t_pair *a, t_pair *b)
{
	t_pair	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static void	heapify(t_pair arr[], int n, int i)
{
	int	largest;
	int	left;
	int	right;

	largest = i;
	left = 2 * i + 1;
	right = 2 * i + 2;
	if (left < n && arr[left].first > arr[largest].first)
		largest = left;
	if (right < n && arr[right].first > arr[largest].first)
		largest = right;
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest);
	}
}

static void	heap_sort(t_pair arr[], int n)
{
	int	i;

	i = n / 2 - 1;
	while (i >= 0)
	{
		heapify(arr, n, i);
		i -= 1;
	}
	i = n - 1;
	while (i > 0)
	{
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
		i -= 1;
	}
}

int	*rank(int *arr, int size)
{
	t_pair	*copy_arr;
	int		i;
	int		*rank_arr;

	copy_arr = malloc(sizeof(t_pair) * size);
	i = 0;
	while (i < size)
	{
		copy_arr[i].first = arr[i];
		copy_arr[i].second = i;
		i += 1;
	}
	heap_sort(copy_arr, size);
	rank_arr = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		rank_arr[copy_arr[i].second] = i;
		i += 1;
	}
	free(copy_arr);
	return (rank_arr);
}
