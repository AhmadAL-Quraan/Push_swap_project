/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:07:01 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/14 21:43:58 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *
 *return a pointer to the first occurence of the char c in the string
 don't forget to check on '\0'
 it should search from 0 --> 255, so unsigned char
 *
 * */
char	*ft_strchr(const char *s, int c)
{
	if (!s)
	{
		return (NULL);
	}
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s += 1;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (NULL);
}

// int main(void) {
//
//   //If you remove unsigned char, it won't recognize this, becuase it's 233 in
//   UTF-8 char *str1 = "\xC3\xA9"; // UTF-8 for é if (ft_strchr(str1, 0xC3) !=
//   NULL) {
//     printf("%s", "YES");
//   } else {
//     printf("%s", "NO");
//   }
// }
