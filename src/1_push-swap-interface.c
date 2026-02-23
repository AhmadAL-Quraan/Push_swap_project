/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_push-swap-interface.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 00:27:26 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 06:44:57 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void interface(int argc, char **string)
{
    t_flags *flags;
    int *arr;
    int arr_size;
    t_stack stack_converted;
    t_stack stack_b;
    //t_stack stack_a;

    stack_b.head = NULL;
    stack_b.size = 0;

    arr_size = start_checker(argc, string, &arr, &flags);
    stack_converted = array_stack_converter(arr, arr_size);
    radix_sort(&stack_converted, &stack_b, arr_size);
    insertion_sort(&stack_converted,&stack_b);

    free(flags);
    free(arr);
}
