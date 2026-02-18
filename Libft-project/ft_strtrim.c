/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 22:11:43 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/19 23:17:24 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *
 *Remove anything from the beggining of the string and the end, any set char

 If you reached a char from the beggining or the end that is not exist in set,
 stop.

 Remember to return memory address using malloc even if the s1 is empty return
 it with malloc
 ptr[end-start+1] --> index
 *
 * */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	if (end < 0)
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]))
		start += 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end -= 1;
	if (start > end)
		end = start - 1;
	ptr = malloc(end - start + 2);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1 + start, end - start + 1);
	ptr[end - start + 1] = '\0';
	return (ptr);
}

//
// int main() {
//   char *string = "ahmad";
//   char *set = "adm";
//   printf("%s", ft_strtrim(string, set));
// }
