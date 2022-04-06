/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:31:50 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:50:13 by libacchu         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
