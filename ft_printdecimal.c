/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 07:56:50 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/14 23:26:26 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printdecimal(int d)
{
	int	neg;

	if (d < 0)
		neg = 1;
	else
		neg = 0;
	ft_putnbr_fd(d, 1);
	return (ft_numlen_pf(d, 10) + neg);
}

void	ft_putunsignednbr_fd(unsigned int n, int fd)
{
	if (n > 9)
		ft_putunsignednbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

int	ft_printunsignedint(unsigned int d)
{
	ft_putunsignednbr_fd(d, 1);
	return (ft_numlen_pf(d, 10));
}
