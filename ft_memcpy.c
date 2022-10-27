/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:34:45 by mpedroso          #+#    #+#             */
/*   Updated: 2022/10/27 15:28:56 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	*tmp2;
	size_t	i;

	tmp = (char *)src;
	tmp2 = (char *)dest;
	i = 0;
	if (!tmp && !tmp2)
		return (NULL);
	while (n)
	{
		tmp2[i] = tmp[i];
		i++;
		n--;
	}
	return (dest);
}
