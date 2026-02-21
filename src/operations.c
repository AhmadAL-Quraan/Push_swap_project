/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 00:21:14 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 06:40:06 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_stack *a) {
  swap_top(a);
  write(1, "sa\n", 3);
}

void sb(t_stack *b) {
  swap_top(b);
  write(1, "sb\n", 3);
}
void ss(t_stack *a, t_stack *b) {
  swap_top(a);
  swap_top(b);
  write(1, "ss\n", 3);
}
void pa(t_stack *a, t_stack *b) {
  push_top(b, a);
  write(1, "pa\n", 3);
}
void pb(t_stack *a, t_stack *b) {
  push_top(a, b);
  write(1, "pb\n", 3);
}
void ra(t_stack *a) {
  rotate_down(a);
  write(1, "ra\n", 3);
}
void rb(t_stack *b) {
  rotate_down(b);
  write(1, "rb\n", 3);
}
void rr(t_stack *a, t_stack *b) {
  rotate_down(a);
  rotate_down(b);
  write(1, "rr\n", 3);
}

void rra(t_stack *stack) {
  rotate_up(stack);
  write(1, "rra\n", 4);
}

void rrb(t_stack *stack) {
  rotate_up(stack);
  write(1, "rrb\n", 4);
}
void rrr(t_stack *stack_a, t_stack *stack_b) {
  rotate_up(stack_a);
  rotate_up(stack_b);
  write(1, "rrr\n", 4);
}
