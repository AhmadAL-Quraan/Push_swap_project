/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_checker_interface.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:07:49 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/20 00:54:58 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/*
 *
 *  This file check parsing + validation + normalization
 *
 * */

static void error(t_flags *flags) {
  free(flags);
  write(1, "Error\n", 6);
  exit(1);
}

void start_checker(int argc, char **string) {
  t_flags *flags;
  int *arr;
  int parse_size;
  int i;

  flags = malloc(sizeof(t_flags));
  flags->adaptive = 2;
  parse_size = parsing(argc, string, &arr);
  if (!check_flags(string, flags) || !parse_size)
    error(flags);
  // i = 0;
  // while (i < parse_size)
  // {
  // 	printf("%d ", arr[i]);
  // 	i += 1;
  // }
}
