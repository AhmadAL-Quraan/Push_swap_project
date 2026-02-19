/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 20:35:01 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/30 04:10:16 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
												strlcat will concatenate to the
   des as much as the buffer can take from src

if( return value >= size) then string was truncated so we use
  if (d_len == size)
	return (size + s_len);


	Check when size == 0
   */
size_t	ft_strlcat(char *des, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = 0;
	if (size == 0)
		return (s_len);
	while (des[d_len] && d_len < size)
		d_len++;
	if (d_len == size)
		return (size + s_len);
	i = 0;
	while (src[i] && (d_len + i + 1) < size)
	{
		des[d_len + i] = src[i];
		i++;
	}
	des[d_len + i] = '\0';
	return (d_len + s_len);
}
// int main() {
//
//   char *str = "ahmad";
//   char des[10] = "hey";
//   ft_strlcat(des, str, sizeof(des));
//   printf("%s", des);
// }
