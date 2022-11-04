/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:29:04 by mpedroso          #+#    #+#             */
/*   Updated: 2022/11/04 18:19:47 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while ((unsigned char)c != (unsigned char)str[len] && len > 0)
		len--;
	if ((unsigned char)str[len] == (unsigned char)c)
		return ((char *)&str[len]);
	return (0);
}
