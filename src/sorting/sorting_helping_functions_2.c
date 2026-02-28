/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helping_functions_2.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 06:46:47 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/25 11:39:36 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_two(t_stack *a, t_count *cnt)
{
	if (a->head->content > a->head->next->content)
		sa(a, cnt);
}

void	sort_three(t_stack *a, t_count *cnt)
{
	int	f;
	int	s;
	int	t;

	f = a->head->content;
	s = a->head->next->content;
	t = a->head->next->next->content;
	if (f > s && s < t && f < t)
		sa(a, cnt);
	else if (f > s && s > t)
	{
		sa(a, cnt);
		rra(a, cnt);
	}
	else if (f > s && s < t && f > t)
		ra(a, cnt);
	else if (f < s && s > t && f < t)
	{
		sa(a, cnt);
		ra(a, cnt);
	}
	else if (f < s && s > t && f > t)
		rra(a, cnt);
}

int	check_two_three(t_stack *a, t_count *cnt)
{
	if (a->size == 2)
	{
		sort_two(a, cnt);
		return (1);
	}
	if (a->size == 3)
	{
		sort_three(a, cnt);
		return (1);
	}
	return (0);
}
