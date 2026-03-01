/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_bench.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:42:13 by aqoraan           #+#    #+#             */
/*   Updated: 2026/03/01 21:46:50 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	print_disorder(float disorder)
{
	int	p;

	p = (int)(disorder * 10000);
	write_str(2, "[bench] disorder: ");
	write_number(2, p / 100);
	write(2, ".", 1);
	if ((p % 100) < 10)
		write(2, "0", 1);
	write_number(2, p % 100);
	write(2, "%\n", 2);
}

static void	print_strategy(t_flags *flags, float disorder, int size)
{
	if (flags->adaptive)
	{
		write_str(2, "[bench] strategy: Adaptive / ");
		if (size <= 10)
			write_str(2, "O(n)");
		else
			write_str(2, give_disorder_algorithm(disorder));
	}
	else if (flags->simple)
	{
		write_str(2, "[bench] strategy: Simple / O(n²)");
	}
	else if (flags->medium)
	{
		write_str(2, "[bench] strategy: Medium / O(n√n)");
	}
	else if (flags->complex)
	{
		write_str(2, "[bench] strategy: Complex / O(nlogn)");
	}
	write(2, "\n", 1);
}

static void	print_ops_2(t_count *cnt)
{
	write_str(2, "[bench] ra: ");
	write_number(2, cnt->ra);
	write(2, " ", 1);
	write_str(2, " rb: ");
	write_number(2, cnt->rb);
	write(2, " ", 1);
	write_str(2, " rr: ");
	write_number(2, cnt->rr);
	write(2, " ", 1);
	write_str(2, " rra: ");
	write_number(2, cnt->rra);
	write(2, " ", 1);
	write_str(2, " rrb: ");
	write_number(2, cnt->rrb);
	write(2, " ", 1);
	write_str(2, " rrr: ");
	write_number(2, cnt->rrr);
}

static void	print_ops_1(t_count *cnt)
{
	write_str(2, "[bench] total_ops: ");
	write_number(2, cnt->total);
	write(2, "\n", 1);
	write_str(2, "[bench] sa: ");
	write_number(2, cnt->sa);
	write(2, " ", 1);
	write_str(2, " sb: ");
	write_number(2, cnt->sb);
	write(2, " ", 1);
	write_str(2, " ss: ");
	write_number(2, cnt->ss);
	write(2, " ", 1);
	write_str(2, " pa: ");
	write_number(2, cnt->pa);
	write(2, " ", 1);
	write_str(2, " pb: ");
	write_number(2, cnt->pb);
	write(2, "\n", 1);
}

void	bench(int *arr, int size, t_flags *flags, t_count *cnt)
{
	float	disorder;

	disorder = disorder_metric(arr, size);
	print_disorder(disorder);
	print_strategy(flags, disorder, size);
	print_ops_1(cnt);
	print_ops_2(cnt);
}
