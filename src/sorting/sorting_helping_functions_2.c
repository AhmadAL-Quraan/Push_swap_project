/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helping_functions_2.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 06:46:47 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/25 08:36:48 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void sort_two(t_stack *a, t_count *cnt) {

  if (a->head->content > a->head->next->content)
    sa(a, cnt);
}

void sort_three(t_stack *a, t_count *cnt) {
  int f = a->head->content;
  int s = a->head->next->content;
  int t = a->head->next->next->content;

  if (f > s && s < t && f < t)
    sa(a, cnt);
  else if (f > s && s > t) {
    sa(a, cnt);
    rra(a, cnt);
  } else if (f > s && s < t && f > t)
    ra(a, cnt);
  else if (f < s && s > t && f < t) {
    sa(a, cnt);
    ra(a, cnt);
  } else if (f < s && s > t && f > t)
    rra(a, cnt);
}
