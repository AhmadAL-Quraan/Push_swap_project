/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_normalization.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:54:11 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/20 21:18:22 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/* Not long long , Not char -> digit
 */

static int check_sign(char *string, int *idx, int *count_digit) {
  int count_neg;
  int count_pos;

  count_neg = 0;
  count_pos = 0;
  while (string[(*idx)] == '-' || string[(*idx)] == '+') {
    count_digit += 1;
    if (string[(*idx)] == '-')
      count_neg += 1;
    if (string[(*idx)] == '+')
      count_pos += 1;
    (*idx) += 1;
  }
  if (count_neg > 1 || count_pos > 1 || (count_neg == 1 && count_pos == 1))
    return (0);
  return (1);
}

static int check_string(char *string) {
  int idx;
  int count_digit;
  long long number;
  int count_neg;
  int count_pos;

  idx = 0;
  count_digit = 0;
  if (!check_sign(string, &idx, &count_digit))
    return (0);
  while (string[idx]) {
    count_digit += 1;
    if (!(string[idx] >= '0' && string[idx] <= '9') || count_digit > 11)
      return (0);
    idx += 1;
  }
  number = ft_atoll(string);
  if (number < -2147483648 || number > 2147483647)
    return (0);
  return (1);
}

int check_flag(char *string) {
  if (ft_strcmp(string, "--bench") == 0) {
    return (1);
  }
  if (ft_strcmp(string, "--simple") == 0) {
    return (1);
  }
  if (ft_strcmp(string, "--complex") == 0) {
    return (1);
  }
  if (ft_strcmp(string, "--medium") == 0) {
    return (1);
  }
  if (ft_strcmp(string, "--adaptive") == 0) {
    return (1);
  }
  return (0);
}

int check_duplicates(int *arr) {
  int i;
  int j;

  i = 0;
  while (arr[i]) {
    j = i + 1;
    while (arr[j]) {
      if (arr[i] == arr[j])
        return (0);
      j += 1;
    }
    i += 1;
  }
  return (1);
}

// Check flags, check long long, check characters, count how many numbers
int normalization(int argc, char **string) {
  int i;
  char **split;
  int j;
  int count;

  i = 1;
  count = 0;
  while (i < argc) {
    split = ft_split(string[i], ' ');
    j = 0;
    while (split[j]) {
      if (check_flag(split[j])) {
        j += 1;
        continue;
      } else if (check_string(split[j]))
        count += 1;
      else
        return (0);
      j += 1;
    }
    free_split(split);
    i += 1;
  }
  return (count);
}
