/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 02:34:14 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/21 07:22:12 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

typedef struct pair
{
	int	first;
	int	second;
}		t_pair;
int		*rank(int *arr, int size);
void	radix_sort(int *arr, int size);

#endif
