#include "../../push_swap.h"
static  int find_position(t_stack *stack_b,int index)
{
    t_node *temp;
    int pos;
    if(stack_b->head)
        return 0;
    temp=stack_b->head;
    pos=0;
    while (temp)
    {
        if(index < temp->index)
        {
            return 0;
        }
        pos++;
        temp=temp->next;

    }
    return(pos);
}
 static void rotate_b(t_stack *stack_b, int pos)
{
	if (pos <= stack_b->size / 2)
	{
		while (pos--)
			rb(stack_b);
	}
	else
	{
		pos = stack_b->size - pos;
		while (pos--)
			rrb(stack_b);
	}
}
void	insertion_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	pos;

	while (stack_a->size > 0)
	{
		pos = find_position(stack_a, stack_a->head->index);
		rotate_b(stack_a, pos);
		pb(stack_a, stack_b);
	}
	while (stack_b->size > 0)
		pa(stack_a, stack_b);
}
