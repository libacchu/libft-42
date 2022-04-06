/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:35:58 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:02:31 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memcmp() function compares byte string s1 against byte string s2.  Both
     strings are assumed to be n bytes long.
The memcmp() function returns zero if the two strings are identical, other-
     wise returns the difference between the first two differing bytes (treated
     as unsigned char values, so that `\200' is greater than `\0', for example).
     Zero-length strings are always identical.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_ptr;
	const unsigned char	*s2_ptr;
	size_t				i;

	s1_ptr = (const unsigned char *)s1;
	s2_ptr = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_ptr[i] != s2_ptr[i])
		{
			return (s1_ptr[i] - s2_ptr[i]);
		}
		i++;
	}
	return (0);
}
