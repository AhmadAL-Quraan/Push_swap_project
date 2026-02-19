/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:14:29 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/01 12:37:35 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *neww)
{
	t_list	*ptr;

	if (!lst || !neww)
		return ;
	if (*lst == NULL)
	{
		*lst = neww;
		return ;
	}
	ptr = *lst;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = neww;
}

// int main() {
//   // node1 --> memory address to a ptr --> mem addrr of the first node
//   t_list *node1 = ft_lstnew("hey");
//   t_list *node2 = ft_lstnew("Helloo");
//   node1->next = node2;
//   t_list **ptr1 = &node1;
//   t_list *node3 = ft_lstnew("here");
//   ft_lstadd_back(ptr1, node3);
//
//   printf("%s", (char *)ft_lstlast(node1)->content);
// }
