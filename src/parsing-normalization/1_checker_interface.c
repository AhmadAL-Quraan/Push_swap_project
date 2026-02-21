/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_checker_interface.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 20:07:49 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 02:18:28 by aqoraan          ###   ########.fr       */
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

void start_checker(int argc, char **string, int **arr, t_flags **flags) {

  int parse_size;
  int i;

  (*flags) = malloc(sizeof(t_flags));
  (*flags)->adaptive = 2;
  parse_size = parsing(argc, string, arr);
  if (!check_flags(string, flags) || !parse_size)
    error(*flags);
}
