/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_radix_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 02:32:22 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 06:45:07 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

void radix_sort(int *arr, int size) {
  int *rankk = rank(arr, size);
  int i = 0;
  while (i < size) {
    printf("%d ", rankk[i]);
    i += 1;
  }
}
