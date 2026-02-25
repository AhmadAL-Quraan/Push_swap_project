/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_array_stack_converter.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 00:19:55 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/25 07:30:47 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static t_stack	*stack_init(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->size = 0;
	stack->head = NULL;
	return (stack);
}

static int	new_node(int *ranked_arr, t_stack *stack, int size)
{
	int		i;
	t_node	*last;
	t_node	*node_idx;

	last = NULL;
	i = 0;
	while (i < size)
	{
		node_idx = malloc(sizeof(t_node));
		if (!node_idx)
		{
			free_stack(stack);
			return (0);
		}
		node_idx->content = ranked_arr[i];
		node_idx->index = i++;
		node_idx->next = NULL;
		if (!stack->head)
			stack->head = node_idx;
		else
			last->next = node_idx;
		last = node_idx;
		stack->size++;
	}
	return (1);
}

t_stack	*array_stack_converter(int *arr, int size)
{
	t_stack	*stack;
	int		*ranked_arr;

	stack = stack_init();
	if (!stack)
		return (NULL);
	ranked_arr = rank(arr, size);
	if (!ranked_arr)
	{
		free(stack);
		return (NULL);
	}
	if (!new_node(ranked_arr, stack, size))
	{
		free(ranked_arr);
		return (NULL);
	}
	free(ranked_arr);
	return (stack);
}
