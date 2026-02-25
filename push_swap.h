/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:58:51 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/25 06:47:56 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "Libft-project/libft.h"
#include "sorting.h"
#include "validation.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct f_context {
  int *arr;
  int size;
  t_flags *flags;
  t_stack *a;
  t_stack *b;
  t_count *cnt;

} t_context;

void interface(int argc, char **string);

void rra(t_stack *stack, t_count *cnt);
void rrb(t_stack *stack, t_count *cnt);
void rrr(t_stack *stack_a, t_stack *stack_b, t_count *cnt);
void sa(t_stack *a, t_count *cnt);
void sb(t_stack *b, t_count *cnt);
void ss(t_stack *a, t_stack *b, t_count *cnt);
void pa(t_stack *a, t_stack *b, t_count *cnt);
void pb(t_stack *a, t_stack *b, t_count *cnt);
void ra(t_stack *a, t_count *cnt);
void rb(t_stack *b, t_count *cnt);
void rr(t_stack *a, t_stack *b, t_count *cnt);

void rotate_up(t_stack *stack);
void rotate_down(t_stack *stack);
void push_top(t_stack *stack_throw, t_stack *stack_host);
void swap_top(t_stack *stack);

void bench(int *arr, int size, t_flags *flags, t_count *cnt);

void error();
#endif
