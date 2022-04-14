/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:45:57 by libacchu          #+#    #+#             */
/*   Updated: 2022/04/14 22:51:52 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_numlen() returns the length of a number.
n: the number
base: the base of the number
*/
int	ft_numlen(long long int n, int base)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n != 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}
