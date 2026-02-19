/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 00:42:27 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/30 03:38:51 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *
 *
 *  Compare two bytes from two memory areas,
 *  Now you are comparing bytes not strings, so no '\0' needed to be checked
 * here If n bytes bigger than num of bytes for ptr1 and ptr2 then undefined
 * behaviour
 *
 *
 * IT COMPARES BYTES NOT NUMBERS NOR STRINGS
 * */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i += 1;
	}
	return (0);
}

// int main() {
//   int arr[] = {1, 2};
//   int arr2[] = {1, 521};
//   printf("%d", ft_memcmp(arr, arr2, 6));
// }
