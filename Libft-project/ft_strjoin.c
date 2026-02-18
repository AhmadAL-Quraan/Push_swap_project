/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 23:47:15 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/17 00:06:46 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *
 *Join two strings in a new memory area and return a pointer to it
 *
 * */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	ptr_idx;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	ptr_idx = 0;
	while (s1[i])
		ptr[ptr_idx++] = s1[i++];
	i = 0;
	while (s2[i])
		ptr[ptr_idx++] = s2[i++];
	ptr[ptr_idx] = '\0';
	return (ptr);
}

// int main() {
//   char *ptr = "ahmad";
//   char *ptr2 = "AL-quraan";
//   printf("%s", ft_strjoin(ptr, ptr2));
// }
