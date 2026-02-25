/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_insertion_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 20:15:32 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/25 11:38:10 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	find_min_pos(t_stack *a)
{
	t_node	*current;
	int		min;
	int		min_pos;
	int		pos;

	current = a->head;
	min = current->content;
	min_pos = 0;
	pos = 0;
	while (current)
	{
		if (current->content < min)
		{
			min = current->content;
			min_pos = pos;
		}
		current = current->next;
		pos++;
	}
	return (min_pos);
}

static void	move_min_to_top(t_stack *a, int min_pos, t_count *cnt)
{
	if (min_pos <= a->size / 2)
	{
		while (min_pos > 0)
		{
			ra(a, cnt);
			min_pos--;
		}
	}
	else
	{
		min_pos = a->size - min_pos;
		while (min_pos > 0)
		{
			rra(a, cnt);
			min_pos--;
		}
	}
}

void	insertion_sort(t_stack *a, t_stack *b, int size, t_count *cnt)
{
	int	min_pos;

	if (size == 2)
	{
		sort_two(a, cnt);
		return ;
	}
	if (size == 3)
	{
		sort_three(a, cnt);
		return ;
	}
	while (a->size > 3)
	{
		min_pos = find_min_pos(a);
		move_min_to_top(a, min_pos, cnt);
		pb(a, b, cnt);
	}
	sort_three(a, cnt);
	while (b->size > 0)
		pa(a, b, cnt);
}
