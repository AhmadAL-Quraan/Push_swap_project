/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:20:25 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/26 23:06:15 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
						copy byte by byte, not the whole thing*
		without handling intersection --> good if two seperate pointers to two
   seperate strings
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (!ptr1 && !ptr2)
	{
		return (NULL);
	}
	while (n--)
	{
		*ptr1++ = *ptr2++;
	}
	return (dest);
}

// int main() {
//
//   // overlap test
//   char arr[3] = {'1', '2', '3'};
//   // int arr2[2] = {3, 4};
//   ft_memcpy(arr + 1, arr, sizeof(char) * 2);
//   for (int i = 0; i < 3; ++i) {
//     printf("%c", arr[i]);
//   }
// }
