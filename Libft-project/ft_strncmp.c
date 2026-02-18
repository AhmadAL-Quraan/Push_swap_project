/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 22:00:35 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/18 23:53:10 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *Compare the first n bytes between 2 strings
 0 if equal
 s1 < s2 negative
 s1 > s2 positive
 *
 * The man page doesn't say to return the difference between them
		but it would be much clearer that way
*
* after the loop:
* if n == 0 and no return then equal
* n > 0 and no return then one of them is bigger than the other
*
*/

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	if (!s1 || !s2)
	{
		return (0);
	}
	i = 0;
	while (s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i += 1;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main() {
//   // in revision try str1 = abc, str2= abcd, n= 3 -- >0
//   // ... str1 =
//   char *str1 = "abcad";
//   char *str2 = "abcadad";
//
//   printf("%d", ft_strncmp(str1, str2, 7));
// }
