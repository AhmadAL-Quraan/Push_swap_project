/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_part3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 07:03:53 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 07:03:54 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rotate_up(stack_a);
	rotate_up(stack_b);
	write(1, "rrr\n", 4);
}
