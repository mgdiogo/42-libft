/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:19:31 by mpedroso          #+#    #+#             */
/*   Updated: 2022/10/27 19:02:58 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	lend;
	size_t	lens;

	lens = ft_strlen((char *)src);
	if (!size)
		return (lens);
	lend = ft_strlen(dest);
	j = lend;
	if (size < lend)
		return (size + lens);
	while (*src != '\0' && j < size - 1)
		dest[j++] = *src++;
	dest[j] = '\0';
	return (lend + lens);
}
