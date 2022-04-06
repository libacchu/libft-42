/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 08:55:24 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:05:03 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 The memmove() function copies len bytes from string src to string dst.  The
     two strings may overlap; the copy is always done in a non-destructive man-
     ner.
The memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ptr_dst;
	char	*ptr_src;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	if (ptr_dst < ptr_src)
	{	
		i = 0;
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			ptr_dst[len] = ptr_src[len];
		}
	}
	return (dst);
}
