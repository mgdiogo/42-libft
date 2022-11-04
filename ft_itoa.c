/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:26:06 by mpedroso          #+#    #+#             */
/*   Updated: 2022/11/04 18:25:01 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mlen(long n)
{
	int	mlen;

	if (n == 0)
		return (1);
	mlen = 0;
	if (n < 0)
	{
		mlen += 1;
		n *= -1;
	}
	while (n > 0)
	{
		mlen += 1;
		n /= 10;
	}
	return (mlen);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nbr;
	char	*a;

	nbr = n;
	if (n < 0)
		nbr *= -1;
	len = mlen(n);
	a = malloc(len + 1);
	if (!a)
		return (NULL);
	if (n < 0)
		a[0] = '-';
	if (n == 0)
		a[0] = '0';
	a[len] = '\0';
	len -= 1;
	while (nbr > 0)
	{
		a[len--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (a);
}
