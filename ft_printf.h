/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:55:57 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/14 23:27:10 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

int					ft_printf(const char *str, ...);
int					ft_printchar(char c);
int					ft_printdecimal(int d);
long long int		ft_numlen_pf(long long int n, int base);
int					ft_printstr(char *str);
int					ft_printunsignedint(unsigned int d);
int					ft_printptr(void *ptr);
int					ft_printhex(unsigned long x, int a);
#endif