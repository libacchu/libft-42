/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:40:04 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:45:49 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_string_count(const char *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	j;

	count = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			count++;
			j = 1;
		}
		else if (s[i] == c)
			j = 0;
		i++;
	}
	return (count);
}

size_t	ft_letter_count(const char *s, char c, size_t start)
{
	size_t	i;

	i = 0;
	while (s[start] && s[start] != c)
	{
		i++;
		start++;
	}
	return (i);
}

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/
char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	amt_new_str;
	size_t	i;
	size_t	len;
	size_t	j;

	amt_new_str = ft_string_count(s, c) + 1;
	ptr = (char **) malloc(amt_new_str * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s) && j < amt_new_str - 1)
	{
		while (s[i] == c)
			i++;
		len = ft_letter_count(s, c, i);
		ptr[j] = ft_substr(s, i, len);
		j++;
		i += len;
		s++;
	}
	ptr[j] = 0;
	return (ptr);
}
