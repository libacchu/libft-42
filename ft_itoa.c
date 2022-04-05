/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:43:59 by libacchu          #+#    #+#             */
/*   Updated: 2022/01/20 09:36:09 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long int	ft_numlen(long int n)
{
	unsigned long int	len;

	len = 1;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_numstrpos(long int num, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = (char *) malloc((len + 1) * sizeof(char));
	i = len - 1;
	while (i > 0)
	{
		ptr[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	ptr[0] = (num % 10) + '0';
	ptr[len] = '\0';
	return (ptr);
}

char	*ft_numstrneg(long int num, size_t len)
{
	char	*ptr;
	size_t	i;

	len++;
	num *= -1;
	ptr = (char *) malloc((len + 1) * sizeof(char));
	ptr[0] = '-';
	i = len - 1;
	while (i > 0)
	{
		ptr[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	ptr[len] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long int	num;

	num = n;
	len = ft_numlen(n);
	if (num < 0)
		return (ft_numstrneg(num, len));
	else
		return (ft_numstrpos(num, len));
}
