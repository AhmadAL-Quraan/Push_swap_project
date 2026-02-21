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

void interface(int argc, char **string) {

  t_flags *flags;
  int *arr;
  int arr_size = start_checker(argc, string, &arr, &flags);
  radix_sort(arr, arr_size);
  free(flags);
  free(arr);
}
