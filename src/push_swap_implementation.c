
#include "push_swap.h"
/// swap operation 
void sa(t_stack *a)
{
    swap_top(a);
    write(1,"sa\n",3);
}

void sb(t_stack *b)
{
    swap_top(b);
    write(1,"sb\n",3);
}
void ss(t_stack *a, t_stack *b)
{
    swap_top(a);
    swap_top(b);
    write(1,"ss\n",3);
}
//push operation
void pa(t_stack *a, t_stack *b)
{
    push_top(b,a);
    write(1,"pa\n",3);
}
void pb(t_stack *a,t_stack *b)
{
    push_top(a,b);
    write(1,"pb\n",3);
}
void ra(t_stack *a)
{
    rotate(a);
    write(1,"ra\n",3);
}
void rb(t_stack *b)
{
    rotate(b);
    write(1,"rb\n",3);
}
void rr(t_stack *a, t_stack *b)
{
    rotate(a);
    rotate(b);
    write(1,"rr\n",3);
}