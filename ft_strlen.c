/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:12:17 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:58:46 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 The strlen() function computes the length of the string s.  The strnlen()
     function attempts to compute the length of s, but never scans beyond the
     first maxlen bytes of s.
The strlen() function returns the number of characters that precede the ter-
     minating NUL character.
*/
size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}
