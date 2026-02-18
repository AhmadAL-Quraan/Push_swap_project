/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:02:50 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/14 21:45:13 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *
 *It works like ft_strchr but searches for the last appearence of c
 search for '\0' if *s == c ...
 *
 * */
char	*ft_strrchr(const char *s, int c)
{
	char	*save_last;

	if (!s)
	{
		return (NULL);
	}
	save_last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			save_last = (char *)s;
		}
		s += 1;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (save_last);
}

// int main() {
//   char *s = "\xC3\xA9"; // UTF-8 for é
//   if (ft_strrchr(s, 0xC3) != NULL) {
//     printf("%s", "yes");
//   } else {
//     printf("%s", "no");
//   }
// }
