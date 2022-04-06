/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:12:32 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 10:56:37 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isdigit() function tests for a decimal digit character.
The isdigit() functions return zero if the character tests
     false and return non-zero if the character tests true.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
