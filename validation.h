/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:58:46 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 03:08:03 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H
#define VALIDATION_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct flags {
  int bench;
  int complex;
  int medium;
  int simple;
  int adaptive;
  int counter;
} t_flags;

int check_flag(char *string);
int check_duplicates(int *arr);
long long ft_atoll(const char *nptr);
int parsing(int argc, char **string, int **arr);
int normalization(int argc, char **string);
void free_split(char **split);
void start_checker(int argc, char **string, int **arr, t_flags **flags);
int check_flags(char **string, t_flags *flags);
#endif
