/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:19:37 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 13:07:04 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
s1: The string to be trimmed.
set: The reference set of characters to trim.
Returns the trimmed string.
NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup((char *)s1));
	start = 0;
	end = ft_strlen((char *) s1);
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	while (ft_strchr(set, s1[end - 1]) && end != 1)
		end--;
	if (start > end)
		return (ft_strdup(""));
	if (s1[start] == '\0' || start == ft_strlen((char *)s1))
		return (ft_strdup(""));
	ptr = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s1[start], (end - start + 1));
	return (ptr);
}
