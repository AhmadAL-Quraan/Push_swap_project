/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 03:01:19 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/01 12:38:21 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Make a new list and after applying the function f on each node
 * Iterates through 'lst' and applies 'f' to each node's content.
 * Creates a new list resulting from these applications.
 * If an allocation fails, the 'del' function is used to free memory.
 *
 */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*ptr;
	t_list	*new_node;
	t_list	*new_list_root;

	if (!lst || !f || !del)
	{
		return (NULL);
	}
	new_list_root = NULL;
	while (lst != NULL)
	{
		ptr = f(lst->content);
		new_node = ft_lstnew(ptr);
		if (!new_node)
		{
			del(ptr);
			ft_lstclear(&new_list_root, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list_root, new_node);
		lst = lst->next;
	}
	return (new_list_root);
}
