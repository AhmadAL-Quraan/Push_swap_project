/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helping_functions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:04:27 by aqoraan           #+#    #+#             */
/*   Updated: 2026/03/01 14:56:02 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	write_str(int fd, char *s)
{
	while (*s)
		write(fd, s++, 1);
}

void	write_number(int fd, int n)
{
	char	c;

	if (n >= 10)
		write_number(fd, n / 10);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

char	*give_disorder_algorithm(float disorder)
{
	if (disorder < 0.2)
	{
		return ("O(n)");
	}
	else if (disorder >= 0.2 && disorder < 0.5)
	{
		return ("O(n√n)");
	}
	else
	{
		return ("O(nlogn)");
	}
}

void	free_stack(t_stack *stack)
{
	t_node	*tmp;

	while (stack->head)
	{
		tmp = stack->head;
		stack->head = stack->head->next;
		free(tmp);
	}
	free(stack);
}

int	check_is_sorted(t_stack *a)
{
	t_node	*node;
	t_node	*node2;

	if (!a->head->next)
		return (1);
	node = a->head;
	node2 = a->head->next;
	while (node2 != NULL)
	{
		if (node->content > node2->content)
		{
			return (0);
		}
		node = node->next;
		node2 = node2->next;
	}
	return (1);
}
