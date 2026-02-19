/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 22:01:35 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/01 12:38:08 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *Return the last node of the list
 The idea is to loop until you find the next node of some node is NULL
 *
 * */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst)
	{
		if (lst->next == NULL)
		{
			break ;
		}
		lst = lst->next;
	}
	return (lst);
}

// int main() {
//   char *cont1 = "ahmad";
//   t_list *node1 = ft_lstnew(cont1);
//   t_list *node2 = ft_lstnew(cont1);
//   node1->next = node2;
//   if (ft_lstlast(node1)->next == NULL) {
//     printf("%s", "done");
//   } else {
//     printf("%s", "wrong");
//   }
// }
