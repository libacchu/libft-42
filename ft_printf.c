/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:55:48 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/14 23:39:09 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	checknext(va_list args, char str)
{
	if (str == '%')
		return (ft_printchar('%'));
	else if (str == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (str == 'd' || str == 'i')
		return (ft_printdecimal(va_arg(args, int)));
	else if (str == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (str == 'u')
		return (ft_printunsignedint(va_arg(args, unsigned int)));
	else if (str == 'x')
		return (ft_printhex(va_arg(args, unsigned int), 'x'));
	else if (str == 'X')
		return (ft_printhex(va_arg(args, unsigned int), 'X'));
	else if (str == 'p')
		return (ft_printptr(va_arg(args, void *)));
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int					i;
	unsigned int		count;
	va_list				args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			count += checknext(args, str[i + 1]);
			i++;
		}
		else
			count += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
