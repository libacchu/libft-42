/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:37:47 by libacchu          #+#    #+#             */
/*   Updated: 2022/01/17 23:35:03 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
