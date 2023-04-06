/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:06:27 by libacchu          #+#    #+#             */
/*   Updated: 2023/04/06 09:18:09 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The toupper() function converts a lower-case
     letter to the corresponding upper-case letter.
If the argument is a lower-case letter, the
     toupper() function returns the corresponding
     upper-case letter if there is one; otherwise,
     the argument is returned unchanged.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
