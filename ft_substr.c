/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:10:10 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/14 11:17:52 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.
Returns the substring.
NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	count;	

	if (!len || (size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (s == NULL)
		return (NULL);
	if ((ft_strlen(s + start)) < len)
		len = ft_strlen(s + start);
	ptr = (char *)malloc((len + 1) * sizeof(ptr));
	if (!ptr)
		return (NULL);
	count = 0;
	while (count < len)
	{
		ptr[count] = s[(size_t)start + count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
