/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:35:07 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 12:00:09 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
s: The string on which to iterate.
f: The function to apply to each character.
Returns the string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;

	ptr = ft_strdup(s);
	if (ptr)
	{
		i = 0;
		while (ptr[i])
		{
			ptr[i] = (*f)(i, ptr[i]);
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
