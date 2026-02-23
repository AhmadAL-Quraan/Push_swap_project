/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 02:34:14 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 07:22:12 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

typedef struct t_stack t_stack;

typedef struct pair
{
	int	first;
	int	second;
}		t_pair;
int		*rank(int *arr, int size);
void	insertion_sort(t_stack *stack_a, t_stack *stack_b);


#endif
