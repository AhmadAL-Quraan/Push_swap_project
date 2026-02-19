/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 20:08:46 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/11 21:38:06 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *Check if There is no src.
 Check if the size is 0
 *
 * check if there is a space for null-term taken for the total size
 * */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	if (!src || !dst)
	{
		return (0);
	}
	src_len = ft_strlen(src);
	if (size <= 0)
	{
		return (src_len);
	}
	while (*src && size != 1)
	{
		size -= 1;
		*dst++ = *src++;
	}
	*dst = '\0';
	return (src_len);
}
// int main() {
//   char *str = "ahmad";
//   char des[10];
//   ft_strlcpy(des, str, 5);
//   printf("%s", des);
// }
