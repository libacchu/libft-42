/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:06:27 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/06 13:09:08 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The tolower() function converts an upper-case
     letter to the corresponding lower-case letter.
If the argument is an upper-case letter, the
     tolower() function returns the corresponding
     lower-case letter if there is one; otherwise,
     the argument is returned unchanged.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
