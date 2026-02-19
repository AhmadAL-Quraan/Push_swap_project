/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 23:00:08 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/15 00:41:16 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *
 *Find a byte C in a block of memory.
 cast C and pointer s to unsigned int so you deal with pure bytes
 If you didn't find the byte return NULL
 *
 *
 * Remember when you say ft_memchr(arr,3,sizeof(arr)) --> you are saying search
 for 0x03 hexa after casting to unsigned cahr
 * */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	find;
	unsigned char	*ptr;

	if (!s)
	{
		return (NULL);
	}
	find = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == find)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}

// int main() {
//   char arr[] = "ahmad";
//   printf("%ld", (char *)ft_memchr(arr, 3, sizeof(arr)) - arr);
// }
