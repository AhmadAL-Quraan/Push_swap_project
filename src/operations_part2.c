/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_part2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 07:02:53 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 07:02:59 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *a)
{
	rotate_down(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	rotate_down(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	rotate_down(a);
	rotate_down(b);
	write(1, "rr\n", 3);
}

void	rra(t_stack *stack)
{
	rotate_up(stack);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack)
{
	rotate_up(stack);
	write(1, "rrb\n", 4);
}
