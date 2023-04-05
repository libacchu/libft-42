/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:48:58 by libacchu          #+#    #+#             */
/*   Updated: 2023/04/06 01:36:15 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
Returns the new list. NULL if the allocation fails.
lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
del: The address of the function used to delete
the content of a node if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_node;
	void	*func;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		func = f(lst->content);
		new_node = ft_lstnew(func);
		if (!new_node)
		{
			del(func);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, new_node);
		lst = lst->next;
	}
	return (new);
}
