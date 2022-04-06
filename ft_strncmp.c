/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:32:52 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 13:02:31 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The strcmp() and strncmp() functions lexicographically compare
		the null-terminated strings s1 and s2.
    	The strncmp() function compares not more than n characters.
		Because strncmp() is designed for comparing strings rather
		than binary data, characters that appear after a `\0' character
		are not compared.
strncmp() functions return an integer greater than, equal to,
		or less than 0, according as the string s1 is greater than,
		equal to, or less than the string s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
