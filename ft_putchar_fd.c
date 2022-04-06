/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:52:19 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 11:06:23 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Outputs the character ’c’ to the given file
descriptor.
*/
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
