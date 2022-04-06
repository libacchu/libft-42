/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:46:30 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:51:36 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 The strdup() function allocates sufficient memory for a copy of the string
     s1, does the copy, and returns a pointer to it.  The pointer may subse-
     quently be used as an argument to the function free(3).
If insufficient memory is available, NULL is returned.
*/
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
