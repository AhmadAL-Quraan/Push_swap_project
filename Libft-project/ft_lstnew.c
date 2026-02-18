/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 21:11:23 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/01 12:38:31 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *
 *Make a new node in Heap and attach the content to it and next to NULL
 * */
t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
	{
		return (NULL);
	}
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
// int main() {
//
//   char arr[4] = {'a', 'b', 'm', '\0'};
//   t_list test = ft_lstnew((void *)arr);
//   printf("%s", (char *)test.content);
// }
