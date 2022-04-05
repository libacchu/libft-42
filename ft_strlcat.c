/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:35:39 by libacchu          #+#    #+#             */
/*   Updated: 2022/01/17 16:35:55 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
