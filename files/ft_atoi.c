/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:16:06 by marvin            #+#    #+#             */
/*   Updated: 2022/10/28 16:45:19 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_white_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long int	sinal;
	long int	res;

	res = 0;
	sinal = 1;
	while (is_white_space(*str))
		str++;
	if (*str == '-')
	{
		sinal = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str++ - 48);
		if (res > 2147483648)
		{
			if (res * sinal > 0)
				return (-1);
			return (0);
		}
	}
	return (res * sinal);
}
