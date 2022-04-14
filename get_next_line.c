/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:33:05 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/14 11:40:31 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strjoin_gnl(char *s1, char const *s2);
static char	*ft_other_str(char *stat);
static char	*ft_get_line(char *stat);
static char	*ft_read(int fd, char *stat);

/*
get_next_line() returns a line read from a
		file descriptor followed by a newline.
		It returns NULL if there is nothing else to read,
		or an error occurred.
NOTE: This gnl is the bonus so it is able to read from more
		than one file descriptor.
*/

char	*get_next_line(int fd)
{
	static char		*stat[10496];
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || fd > 10496)
		return (NULL);
	stat[fd] = ft_read(fd, stat[fd]);
	if (!stat[fd])
		return (NULL);
	line = ft_get_line(stat[fd]);
	stat[fd] = ft_other_str(stat[fd]);
	return (line);
}

static char	*ft_strjoin_gnl(char *s1, char const *s2)
{
	size_t	len;
	char	*ptr;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(len * sizeof(ptr));
	if (ptr == 0)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	free(s1);
	return (ptr);
}

static char	*ft_other_str(char *stat)
{
	char	*line;
	size_t	len;
	size_t	start;

	if (ft_strchr(stat, '\n'))
	{
		start = (ft_strlen(stat) - ft_strlen(ft_strchr(stat, '\n'))) + 1;
		len = ft_strlen(ft_strchr(stat, '\n')) - 1;
	}
	else
	{
		free(stat);
		return (NULL);
	}
	line = ft_substr(stat, start, len);
	free(stat);
	return (line);
}

static char	*ft_get_line(char *stat)
{
	size_t	len;

	if (!stat[0])
		return (NULL);
	if (ft_strchr(stat, '\n'))
		len = ft_strlen(stat) - ft_strlen(ft_strchr(stat, '\n')) + 1;
	else
		len = ft_strlen(stat);
	return (ft_substr(stat, 0, len));
}

static char	*ft_read(int fd, char *stat)
{
	char	*buff;
	int		read_size;

	if (stat == NULL)
		stat = ft_calloc(1, 1);
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	read_size = 1;
	while (read_size > 0)
	{
		read_size = read(fd, buff, BUFFER_SIZE);
		if (read_size == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_size] = '\0';
		stat = ft_strjoin_gnl(stat, buff);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	free(buff);
	return (stat);
}
