/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_push-swap-interface.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 00:27:26 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/24 02:45:56 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	adaptive_check_algorithm(int *arr, int size, t_stack *a,
		t_count *cnt)
{
	float	disorder;
	t_stack	*b;

	b = malloc(sizeof(t_stack));
	if (!b)
		error();
	b->head = NULL;
	b->size = 0;
	disorder = disorder_metric(arr, size);
	if (disorder < 0.2)
	{
		insertion_sort(a, b, size, cnt);
	}
	else if (disorder >= 0.2 && disorder < 0.5)
	{
		range_sort(a, b, size, cnt);
	}
	else
	{
		radix_sort(a, b, size, cnt);
	}
	free_stack(b);
}

static void	init_context(int argc, char **string, t_context *ctx)
{
	ctx->size = start_checker(argc, string, &ctx->arr, &ctx->flags);
	ctx->a = array_stack_converter(ctx->arr, ctx->size);
	if (!ctx->a)
		error();
	if (ctx->flags->adaptive)
		adaptive_check_algorithm(ctx->arr, ctx->size, ctx->a, ctx->cnt);
	ctx->b = malloc(sizeof(t_stack));
	if (!ctx->b)
	{
		free_stack(ctx->a);
		error();
	}
	ctx->b->head = NULL;
	ctx->b->size = 0;
}

static void	execute_context(t_context *ctx)
{
	if (ctx->flags->complex)
		radix_sort(ctx->a, ctx->b, ctx->size, ctx->cnt);
	else if (ctx->flags->simple)
		insertion_sort(ctx->a, ctx->b, ctx->size, ctx->cnt);
	else if (ctx->flags->medium)
		range_sort(ctx->a, ctx->b, ctx->size, ctx->cnt);
	if (ctx->flags->bench)
		bench(ctx->arr, ctx->size, ctx->flags, ctx->cnt);
}

static void	start(int argc, char **string, t_count *cnt)
{
	t_context	ctx;

	ctx.cnt = cnt;
	init_context(argc, string, &ctx);
	execute_context(&ctx);
	free_stack(ctx.a);
	free_stack(ctx.b);
	free(ctx.flags);
	free(ctx.arr);
}

void	interface(int argc, char **string)
{
	t_count	*cnt;

	cnt = ft_calloc(1, sizeof(t_count));
	if (!cnt)
		error();
	start(argc, string, cnt);
	free(cnt);
}
