/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:09:43 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 10:57:45 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 The isprint() function tests for any printing character, including space(` ').
 The isprint() function returns zero if the character tests false and returns
     non-zero if the character tests true.q
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
