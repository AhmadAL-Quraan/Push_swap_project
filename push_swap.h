#ifndef push_swap_h
#define push_swap_h
#include <unistd.h>
typedef struct t_node
{
    int content;
    struct t_node *next;
} t_node;

typedef struct t_stack
{
    int size;
    t_node *head;
} t_stack;

void swap_top(t_stack *stack);
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void push_top(t_stack *stack_throw,t_stack *stack_host);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void rotate(t_stack *stack);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
#endif