/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 03:49:41 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/26 22:22:23 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *Turn a string into int

 1) handle negative
 2) Don't forget to handle when it's -2^31 --> long long
 * */
#include "libft.h"

static int	int_len(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size += 1;
	}
	while (n != 0)
	{
		size += 1;
		n /= 10;
	}
	return (size);
}

static void	turn_to_string(long long new_num, int last, int *idx, char *ptr)
{
	while (new_num != 0)
	{
		last = new_num % 10;
		ptr[(*idx)--] = last + '0';
		new_num /= 10;
	}
}

char	*ft_itoa(int n)
{
	long long	new_num;
	int			negative;
	int			last;
	int			idx;
	char		*ptr;

	new_num = n;
	negative = 0;
	last = 0;
	idx = int_len(n);
	if (new_num < 0)
	{
		negative = 1;
		new_num *= -1;
	}
	ptr = malloc(idx + 1);
	if (!ptr)
		return (NULL);
	ptr[idx--] = '\0';
	if (new_num == 0)
		ptr[idx] = '0';
	turn_to_string(new_num, last, &idx, ptr);
	if (negative)
		ptr[idx] = '-';
	return (ptr);
}

// int main() {
//   printf("%s\n", ft_itoa(-2147483648));
//   printf("%s\n", ft_itoa(2147483647));
//   printf("%s\n", ft_itoa(-77));
//   printf("%s\n", ft_itoa(0));
//   printf("%s\n", ft_itoa(-0));
// }
