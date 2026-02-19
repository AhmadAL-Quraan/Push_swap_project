/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 21:31:01 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/16 21:36:49 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *
 *duplicate a string and return a pointer to the new allocated memory using
 * malloc
 *
 * */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*new_string;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		i += 1;
	}
	new_string = malloc(i + 1);
	if (!new_string)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		new_string[i] = s[i];
		i += 1;
	}
	new_string[i] = '\0';
	return (new_string);
}
