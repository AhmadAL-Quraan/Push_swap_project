/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:18:48 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/01 12:37:33 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 *
 * make the new node be the first node
 * So make it points to the original (old )node and make the **lst points to the
 * new one
 *
 * */
void	ft_lstadd_front(t_list **lst, t_list *neww)
{
	if (!lst || !neww)
	{
		return ;
	}
	neww->next = *lst;
	*lst = neww;
}
