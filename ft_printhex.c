/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:47:07 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/14 23:24:53 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

long long int	ft_numlen_pf(long long int n, int base)
{
	long long int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n != 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}

int	ft_printhex(unsigned long x, int a)
{
	int		i;
	char	*dig_low;
	char	*dig_up;

	i = 0;
	dig_low = "0123456789abcdef";
	dig_up = "0123456789ABCDEF";
	if ((x / 16) != 0)
		i += ft_printhex((x / 16), a);
	if (a == 'X')
		i += ft_printchar(dig_up[x % 16]);
	else
		i += ft_printchar(dig_low[x % 16]);
	return (i);
}

int	ft_printptr(void *ptr)
{
	int	i;

	ft_putstr_fd("0x", 1);
	i = 0;
	i += ft_printhex((unsigned long)ptr, 'x');
	return (i + 2);
}
