/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:45:57 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/16 22:04:06 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *
 *  Allocate memory for an array of nmemb of size
 *  size --> number of bytes for each nmemb(element)
 *  the memory is set to zero
 *  return a pointer to the alloc mem
 *  SIZE_MAX --> is the maximum number of bytes size_t can hold
 *
 *  1) Check if the num of elements is less than or equal to max size_t / size
 *  to make sure it fits --> safer than malloc without check --> imagine 8
 * billion elemnts or smthing
 * */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	if (size != 0 && nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		((unsigned char *)ptr)[i] = 0;
		i += 1;
	}
	return (ptr);
}
