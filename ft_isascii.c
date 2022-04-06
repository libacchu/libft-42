/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:36:28 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 10:54:47 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isascii() function tests for an ASCII character.
The isascii() function returns zero if the character tests false and returns
     non-zero if the character tests true.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
