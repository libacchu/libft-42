/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:35:07 by libacchu          #+#    #+#             */
/*   Updated: 2022/01/21 12:06:03 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;

	ptr = ft_strdup(s);
	if (ptr)
	{
		i = 0;
		while (ptr[i])
		{
			ptr[i] = (*f)(i, ptr[i]);
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
