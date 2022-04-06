/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:57:46 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 10:52:46 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isalpha() function tests for any character for which isupper(3) or
     islower(3) is true.
The isalpha() function returns zero if the character tests false and returns
     non-zero if the character tests true.
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
