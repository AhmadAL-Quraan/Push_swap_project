#include "../../push_swap.h"

t_stack array_stack_converter(int *arr, int size)
{
    t_stack stack;
    t_node  *last;
    t_node *node_idx;
    int *ranked_arr;
    int i;

    ranked_arr = rank(arr, size);
    stack.size = 0;
    stack.head = NULL;
    i = 0;
    while (i < size)
    {
        node_idx = malloc(sizeof(t_node));
        if (!node_idx)
        {
            free(ranked_arr);
            return stack;
        }
        node_idx->content = arr[i];
        node_idx->index = ranked_arr[i];
        node_idx->next = NULL;

        if (!stack.head)
            stack.head = node_idx;
        else
            last->next = node_idx;

        last = node_idx;
        stack.size++;
        i++;      
    }
    free(ranked_arr);
    return stack;
}