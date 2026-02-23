/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:58:51 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 06:20:01 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "Libft-project/libft.h"
# include "sorting.h"
# include "validation.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_node
{
	int				content;
	int 			index;
	struct t_node	*next;
}					t_node;

typedef struct t_stack
{
	int				size;
	t_node			*head;
}					t_stack;

void				interface(int argc, char **string);
void				rra(t_stack *stack);
void				rrb(t_stack *stack);
void				rrr(t_stack *stack_a, t_stack *stack_b);
void				swap_top(t_stack *stack);
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);
void				push_top(t_stack *stack_throw, t_stack *stack_host);
void				pa(t_stack *a, t_stack *b);
void				pb(t_stack *a, t_stack *b);
void				rotate_up(t_stack *stack);
void				rotate_down(t_stack *stack);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);
void 				radix_sort(t_stack *stack_a, t_stack *stack_b, int size);
t_stack				 array_stack_converter(int *arr, int size);
void	             insertion_sort(t_stack *stack_a, t_stack *stack_b);
#endif
