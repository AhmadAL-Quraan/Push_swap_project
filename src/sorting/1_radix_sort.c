/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_radix_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 02:32:22 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 06:45:07 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

static int find_max_bits(t_stack *stack_a)
{
	t_node *current;
	int max_num;
	int max_bits;

	current=stack_a->head;
	max_num=0;
	max_bits=0;
	while(current)
	{
		if(current->index > max_num)
		{
			max_num=current->index;
		}
		current=current->next;
	}
	while(max_num>>max_bits != 0)
	{
		max_bits+=1;
	}
	return(max_bits);

}

void radix_sort(t_stack *stack_a, t_stack *stack_b ,int size )
{
	
	int max_bits;
	int i;
	int j;
	
	max_bits=find_max_bits(stack_a);
	i=0;
	while(i<max_bits)
	{
		j=0; 
		while(j<size)
		{
			if(((stack_a->head->index>>i) & 1) == 1)
			{
				ra(stack_a);
			}
			else
			{
				pb(stack_a,stack_b);
			}
			j+=1;
		}
		while(stack_b->head)
		{
			pa(stack_a,stack_b);
		}
		i+=1;
	}
}