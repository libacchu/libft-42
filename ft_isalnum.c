/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:41:29 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 10:51:30 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isalnum() function tests for any character for which isalpha(3) or
     isdigit(3) is true.
The isalnum() function returns zero if the character tests false and returns
     non-zero if the character tests true.
*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
