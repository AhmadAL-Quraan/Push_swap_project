#ifndef push_swap_h
#define push_swap_h
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct t_node {
  int content;
  struct t_node *next;
} t_node;

typedef struct t_stack {
  int size;
  t_node *head;
} t_stack;

void rra(t_stack *stack);
void rrb(t_stack *stack);
void rrr(t_stack *stack_a, t_stack *stack_b);
void swap_top(t_stack *stack);
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void push_top(t_stack *stack_throw, t_stack *stack_host);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void rotate_up(t_stack *stack);
void rotate_down(t_stack *stack);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
#endif
