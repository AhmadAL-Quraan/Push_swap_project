/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations-logic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 00:21:22 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/24 01:54:37 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_top(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	int		temp;

	if (!stack || stack->size < 2)
		return ;
	first = stack->head;
	second = first->next;
	temp = first->content;
	first->content = second->content;
	second->content = temp;
}

void	push_top(t_stack *stack_throw, t_stack *stack_host)
{
	t_node	*node_throwed;
	t_node	*node_hostted;
	t_node	*temp;

	if (!stack_throw || !stack_host || stack_throw->size == 0)
		return ;
	node_hostted = stack_host->head;
	node_throwed = stack_throw->head;
	temp = node_throwed;
	stack_throw->head = node_throwed->next;
	temp->next = node_hostted;
	stack_host->head = temp;
	stack_host->size++;
	stack_throw->size--;
}

void	rotate_down(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || stack->size < 2)
		return ;
	first = stack->head;
	stack->head = first->next;
	last = stack->head;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	rotate_up(t_stack *stack)
{
	int		last_num;
	t_node	*last;
	int		save;
	int		temp;

	if (!stack || stack->size < 2)
		return ;
	last = stack->head;
	while (last->next != NULL)
		last = last->next;
	last_num = last->content;
	save = stack->head->content;
	last = stack->head->next;
	while (last != NULL)
	{
		temp = last->content;
		last->content = save;
		save = temp;
		last = last->next;
	}
	stack->head->content = last_num;
}
