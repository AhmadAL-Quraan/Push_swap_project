/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:23:01 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/26 22:33:28 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *
 *The f function takes (idx, char), return the result in memory area using
 * malloc
 *
 * */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	idx;
	char			*new_string;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	idx = 0;
	new_string = malloc(len + 1);
	if (!new_string)
		return (NULL);
	while (idx < len)
	{
		new_string[idx] = (*f)(idx, s[idx]);
		idx += 1;
	}
	new_string[idx] = '\0';
	return (new_string);
}
