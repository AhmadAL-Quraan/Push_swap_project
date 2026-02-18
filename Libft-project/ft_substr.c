/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 21:41:51 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/16 22:02:58 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *Make a substring out of a string.

 Start for index, len for the size I need to take.
 The start index is part of the len.
 If the start index is out of bound in string --> return "" (empty string)


return a pointer to the new substring
 *
 *
 * */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	follow_len;
	size_t	total_size;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = start;
	follow_len = 0;
	total_size = 0;
	while (follow_len++ < len && s[i++])
		total_size += 1;
	ptr = malloc(total_size + 1);
	if (!ptr)
		return (NULL);
	follow_len = 0;
	i = start;
	total_size = 0;
	while (follow_len++ < len && s[i])
		ptr[total_size++] = s[i++];
	ptr[total_size] = '\0';
	return (ptr);
}

// int main(void) {
//   char *ptr;
//
//   ptr = "ahmad";
//   printf("%s", ft_substr(ptr, 2, 2));
// }
