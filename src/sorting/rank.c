/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 02:05:15 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 06:14:19 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
static void swap(t_pair *a, t_pair *b) {
  t_pair temp = *a;
  *a = *b;
  *b = temp;
}

static void heapify(t_pair arr[], int n, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left].first > arr[largest].first)
    largest = left;

  if (right < n && arr[right].first > arr[largest].first)
    largest = right;

  if (largest != i) {
    swap(&arr[i], &arr[largest]);

    heapify(arr, n, largest);
  }
}

static void heapSort(t_pair arr[], int n) {

  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  for (int i = n - 1; i > 0; i--) {
    swap(&arr[0], &arr[i]);

    heapify(arr, i, 0);
  }
}

int *rank(int *arr, int size) {
  t_pair *copy_arr = malloc(sizeof(t_pair) * size);
  int i = 0;
  while (i < size) {
    copy_arr[i].first = arr[i];
    copy_arr[i].second = i;
    i += 1;
  }
  heapSort(copy_arr, size);
  int *rank_arr = malloc(size * sizeof(int));
  i = 0;
  while (i < size) {
    rank_arr[copy_arr[i].second] = i;
    i += 1;
  }
  free(copy_arr);
  return rank_arr;
}
