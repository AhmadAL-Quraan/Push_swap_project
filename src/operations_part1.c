/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_part1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 00:21:14 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/25 09:01:44 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a, t_count *cnt)
{
	cnt->sa += 1;
	cnt->total += 1;
	swap_top(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b, t_count *cnt)
{
	cnt->sb += 1;
	cnt->total += 1;
	swap_top(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b, t_count *cnt)
{
	swap_top(a);
	swap_top(b);
	cnt->ss += 1;
	cnt->total += 1;
	write(1, "ss\n", 3);
}

void	pa(t_stack *a, t_stack *b, t_count *cnt)
{
	push_top(b, a);
	cnt->pa += 1;
	cnt->total += 1;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b, t_count *cnt)
{
	cnt->pb += 1;
	cnt->total += 1;
	push_top(a, b);
	write(1, "pb\n", 3);
}
