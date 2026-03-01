/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_radix_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:04:11 by aqoraan           #+#    #+#             */
/*   Updated: 2026/03/01 15:07:15 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	find_max_bits(t_stack *stack_a)
{
	t_node	*current;
	int		max_num;
	int		max_bits;

	current = stack_a->head;
	max_num = 0;
	max_bits = 0;
	while (current)
	{
		if (current->content > max_num)
		{
			max_num = current->content;
		}
		current = current->next;
	}
	while (max_num >> max_bits != 0)
	{
		max_bits += 1;
	}
	return (max_bits);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b, int size, t_count *cnt)
{
	int	max_bits;
	int	i;
	int	j;

	if (check_is_sorted(stack_a) || check_two_three(stack_a, cnt))
		return ;
	max_bits = find_max_bits(stack_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((stack_a->head->content >> i) & 1) == 1)
				ra(stack_a, cnt);
			else
				pb(stack_a, stack_b, cnt);
			j += 1;
		}
		while (stack_b->head)
			pa(stack_a, stack_b, cnt);
		i += 1;
	}
}
