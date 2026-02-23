// // #include "../push_swap.h"

// // int	main(int argc, char **argv)
// // {
// // 	interface(argc, argv);
// // 	// t_stack *a = malloc(sizeof(t_stack));
// // 	// t_stack *b = malloc(sizeof(t_stack));
// // 	// a->size = 3;
// // 	// b->size = 3;
// // 	// t_node *num1_a = malloc(sizeof(t_node));
// // 	// t_node *num2_a = malloc(sizeof(t_node));
// // 	// t_node *num3_a = malloc(sizeof(t_node));
// // 	// t_node *num1_b = malloc(sizeof(t_node));
// // 	// t_node *num2_b = malloc(sizeof(t_node));
// // 	// t_node *num3_b = malloc(sizeof(t_node));
// // 	// num1_a->content = 1;
// // 	// num2_a->content = 2;
// // 	// num3_a->content = 3;
// // 	//
// // 	// num1_b->content = 4;
// // 	// num2_b->content = 5;
// // 	// num3_b->content = 6;
// // 	//
// // 	// num3_a->next = num2_a;
// // 	// num2_a->next = num1_a;
// // 	// num1_a->next = NULL;
// // 	//
// // 	// num1_b->next = num2_b;
// // 	// num2_b->next = num3_b;
// // 	// num3_b->next = NULL;
// // 	//
// // 	// a->head = num3_a;
// // 	// b->head = num1_b;
// // 	//
// // 	// rrr(a, b);
// // 	// t_node *run = a->head;
// // 	// printf("Print a ....\n");
// // 	// while (run != NULL) {
// // 	//   printf("%d", run->content);
// // 	//   run = run->next;
// // 	// }
// // 	// printf("\nPrint b ....\n");
// // 	// run = b->head;
// // 	// while (run != NULL) {
// // 	//   printf("%d", run->content);
// // 	//   run = run->next;
// // 	// }
// // }
// #include "../push_swap.h"
// #include <stdio.h>

// void print_stack(t_stack *stack)
// {
//     t_node *current = stack->head;
//     while (current)
//     {
//         printf("%d(%d) ", current->content, current->index);
//         current = current->next;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     int arr[] = {5, 3, 8, 1, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     t_stack stack_a = array_stack_converter(arr, size);
//     t_stack stack_b;
//     stack_b.head = NULL;
//     stack_b.size = 0;

//     printf("Before radix sort:\n");
//     print_stack(&stack_a);

//     radix_sort(&stack_a, &stack_b, size);

//     printf("After radix sort:\n");
//     print_stack(&stack_a);

//     return 0;
// }
