/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_interface.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 00:21:50 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/19 18:05:50 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Libft-project/libft.h"
#include "../../push_swap.h"

/*
 *
 *  This file check parsing + validation + normalization
 *
 * */

void checker_interface(char **string) {
  t_flags *flags;

  flags = malloc(sizeof(t_flags));
  flags->adaptive = 2;
  if (check_flags(string, flags) == 0) {
    write(1, "Error\n", 6);
    exit(1);
  }
  split_function();
}
