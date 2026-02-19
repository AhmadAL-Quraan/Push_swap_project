/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:02:42 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/11 21:23:27 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_des;
	unsigned char	*ptr_src;

	if (!dest && !src)
		return (NULL);
	ptr_des = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_des < ptr_src)
	{
		while (n--)
			*ptr_des++ = *ptr_src++;
	}
	else
	{
		ptr_des += n;
		ptr_src += n;
		ptr_des -= 1;
		ptr_src -= 1;
		while (n--)
			*ptr_des-- = *ptr_src--;
	}
	return (dest);
}
// int main() {
//
//   // overlap test
//   char arr[3] = {'1', '2', '3'};
//   // int arr2[2] = {3, 4};
//   ft_memmove(arr + 1, arr, sizeof(char) * 2);
//   for (int i = 0; i < 3; ++i) {
//     printf("%c", arr[i]);
//   }
//   // result is 112
// }
