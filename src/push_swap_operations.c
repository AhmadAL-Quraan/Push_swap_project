#include "../push_swap.h"
#include <threads.h>
void swap_top(t_stack *stack) {
  t_node *first;
  t_node *second;
  int temp; // int -> its just a content not a  node

  if (!stack || stack->size < 2)
    return;
  first = stack->head;  /// decleration of head node
  second = first->next; /// decleration of 2nd node
  /// swaping the content of 1st & 2nd node
  temp = first->content;
  first->content = second->content;
  second->content = temp;
} // push first node from stack thtow to stack host
void push_top(t_stack *stack_throw, t_stack *stack_host) {
  if (!stack_throw || !stack_host || stack_throw->size == 0)
    return;
  t_node *node_throwed;
  t_node *node_hostted;
  t_node *temp;

  node_hostted = stack_host->head;
  node_throwed = stack_throw->head;
  temp = node_throwed;
  stack_throw->head = node_throwed->next;
  temp->next = node_hostted;
  stack_host->head = temp;
  stack_host->size++;
  stack_throw->size--;
}
// rotate(): Shift up all elements of stack a by one.(The first element becomes
// the last on)
void rotate_down(t_stack *stack) {
  if (!stack || stack->size < 2)
    return;
  t_node *first;
  t_node *last;

  first = stack->head;
  stack->head = first->next;
  last = stack->head;
  while (last->next != NULL)
    last = last->next;
  last->next = first;
  first->next = NULL;
}

void rotate_up(t_stack *stack) {
  if (!stack || stack->size < 2)
    return;
  int last_num;
  t_node *last = stack->head;
  // find the last node
  while (last->next != NULL)
    last = last->next;

  last_num = last->content;
  int save = stack->head->content;
  int temp;
  // reuse the same variable again
  last = stack->head->next;
  while (last != NULL) {
    temp = last->content;
    last->content = save;
    save = temp;
    last = last->next;
  }
  stack->head->content = last_num;
}
