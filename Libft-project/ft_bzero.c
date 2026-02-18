/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:19:10 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/14 21:57:10 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * write zeros on n bytes in a mem area
 * Every byte of any object can be accessed via unsigned char *
 *
 * */

void	ft_bzero(void *arr, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)arr;
	while (size--)
	{
		*ptr++ = 0;
	}
}
// int	main(void)
// {
// 	int	array[4] = {1, 2, 3, 4};
//
// 	ft_bzero(array, sizeof(int));
// 	for (int i = 0; i < 4; ++i)
// 	{
// 		printf("%d", array[i]);
// 	}
// }
