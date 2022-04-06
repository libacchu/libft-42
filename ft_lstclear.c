/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:40:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 10:33:08 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.
lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		temp = *lst;
		del(temp->content);
		temp = temp->next;
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
