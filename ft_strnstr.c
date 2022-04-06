/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:37:47 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 13:05:24 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 The strnstr() function locates the first occurrence of
 		the null-terminated string needle in the string
		haystack, where not more than len characters
		are searched. Characters that appear after
     	a `\0' character are not searched.
If needle is an empty string, haystack is returned;
		if needle occurs nowhere in haystack, NULL is returned;
		otherwise a pointer to the first character of the first occurrence
		of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr_hay;

	ptr_hay = (char *)haystack;
	i = 0;
	if (ft_strlen(needle) == 0)
		return (ptr_hay);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && i + j < len
			&& haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (!needle[j])
			return (&ptr_hay[i]);
		i++;
	}
	return (NULL);
}
