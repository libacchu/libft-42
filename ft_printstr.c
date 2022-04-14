/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:48:54 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/14 23:10:36 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

// ft_printf()

int	ft_printstr(char *str)
{
	if (!str)
	{	
		ft_putstr_fd("(null)", 1);
		return (6);
	}	
	else
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
}
