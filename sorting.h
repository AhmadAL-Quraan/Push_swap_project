/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 02:34:14 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/25 11:36:43 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

typedef struct pair
{
	int				first;
	int				second;
}					t_pair;

typedef struct t_node
{
	int				content;
	int				index;
	struct t_node	*next;
}					t_node;

typedef struct t_stack
{
	int				size;
	t_node			*head;
}					t_stack;

typedef struct s_count
{
	int				total;
	int				sa;
	int				sb;
	int				ss;
	int				pa;
	int				pb;
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
}					t_count;

void				write_str(int fd, char *s);
void				write_number(int fd, int n);
int					*rank(int *arr, int size);
float				disorder_metric(int *arr, int size);
t_stack				*array_stack_converter(int *arr, int size);
void				radix_sort(t_stack *stack_a, t_stack *stack_b, int size,
						t_count *cnt);
void				insertion_sort(t_stack *a, t_stack *b, int size,
						t_count *cnt);
void				range_sort(t_stack *a, t_stack *b, int size, t_count *cnt);
char				*give_disorder_algorithm(float disorder);
void				free_stack(t_stack *stack);
int					check_is_sorted(t_stack *a);
void				sort_three(t_stack *a, t_count *cnt);
void				sort_two(t_stack *a, t_count *cnt);
int					check_two_three(t_stack *a, t_count *cnt);
#endif
