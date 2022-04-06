/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:32:35 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:49:35 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is con-
     sidered to be part of the string; therefore if c is `\0', the functions
     locate the terminating `\0'.
The strrchr() function is identical to strchr(), except it locates the last
     occurrence of c.
The functions strchr() and strrchr() return a pointer to the located charac-
     ter, or NULL if the character does not appear in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	char	*final;

	final = (char *)s;
	while (*final)
	{
		if (*final == (char)c)
			return (final);
		final++;
	}
	if (*final == (char)c)
		return (final);
	return (NULL);
}
