/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:10:10 by libacchu          #+#    #+#             */
/*   Updated: 2022/01/21 12:01:27 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	count;	

	if (!len || (size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (s == NULL)
		return (NULL);
	if ((ft_strlen(s + start)) < len)
		len = ft_strlen(s + start);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	count = 0;
	while (count < len)
	{
		ptr[count] = s[(size_t)start + count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
