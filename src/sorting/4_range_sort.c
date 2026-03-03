/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_range_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 00:21:27 by aqoraan           #+#    #+#             */
/*   Updated: 2026/03/01 15:07:25 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	ft_sqrt(int n)
{
	int	i;

	if (n <= 0)
		return (0);
	i = 1;
	while (i * i <= n)
		i++;
	return (i - 1);
}

static int	find_max_pos(t_stack *b)
{
	t_node	*current;
	int		max;
	int		max_pos;
	int		pos;

	current = b->head;
	max = current->content;
	max_pos = 0;
	pos = 0;
	while (current)
	{
		if (current->content > max)
		{
			max = current->content;
			max_pos = pos;
		}
		current = current->next;
		pos++;
	}
	return (max_pos);
}

static void	move_max_to_top(t_stack *b, int pos, t_count *cnt)
{
	if (pos <= b->size / 2)
	{
		while (pos--)
			rb(b, cnt);
	}
	else
	{
		pos = b->size - pos;
		while (pos--)
			rrb(b, cnt);
	}
}

static void	move_back_to_b(t_stack *a, t_stack *b, t_count *cnt)
{
	int	max_pos;

	while (b->size > 0)
	{
		max_pos = find_max_pos(b);
		move_max_to_top(b, max_pos, cnt);
		pa(a, b, cnt);
	}
}

void	range_sort(t_stack *a, t_stack *b, int size, t_count *cnt)
{
	int	range;
	int	i;

	if (check_is_sorted(a) || check_two_three(a, cnt))
		return ;
	range = ft_sqrt(size);
	i = 0;
	while (a->size > 0)
	{
		if (a->head->content <= i)
		{
			pb(a, b, cnt);
			rb(b, cnt);
			i++;
		}
		else if (a->head->content <= i + range)
		{
			pb(a, b, cnt);
			i++;
		}
		else
			ra(a, cnt);
	}
	move_back_to_b(a, b, cnt);
}
