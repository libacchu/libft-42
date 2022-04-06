/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:35:39 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:55:49 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in practice
     this should not happen as it means that either dstsize is incorrect or that
     dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize <= 0)
		return (slen);
	if (dstsize <= dlen)
		return (dstsize + slen);
	i = 0;
	while (i < dstsize - dlen - 1 && src[i] != '\0')
	{
		dst[dlen + i] = *(char *)(src + i);
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
