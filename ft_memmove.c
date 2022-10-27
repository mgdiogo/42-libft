/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:17:36 by mpedroso          #+#    #+#             */
/*   Updated: 2022/10/26 16:10:47 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdest;
	size_t			i;

	tmpsrc = (unsigned char *)src;
	tmpdest = (unsigned char *)dest;
	if (!tmpsrc && !tmpdest)
		return (NULL);
	if (tmpdest > tmpsrc)
	{
		while (n-- > 0)
			tmpdest[n] = tmpsrc[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			tmpdest[i] = tmpsrc[i];
	}
	return (dest);
}
