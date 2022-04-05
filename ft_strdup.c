/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:46:30 by libacchu          #+#    #+#             */
/*   Updated: 2022/01/20 10:04:18 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + 1;
	ptr = (char *)malloc(len * sizeof(char));
	i = 0;
	if (ptr)
	{	
		while (i < len - 1)
		{
			ptr[i] = *(char *)(s1 + i);
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
