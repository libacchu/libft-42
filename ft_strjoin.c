/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:09:39 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:53:54 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
s1: The prefix string.
s2: The suffix string.
Returns the new string.
NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ptr;
	size_t	i;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *) malloc(len);
	if (ptr == 0)
		return (NULL);
	i = 0;
	while (*s1)
	{
		ptr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		ptr[i] = *s2;
		i++;
		s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
