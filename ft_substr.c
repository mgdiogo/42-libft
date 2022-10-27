/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:02:21 by mpedroso          #+#    #+#             */
/*   Updated: 2022/10/27 18:38:27 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)&s[start]);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > slen)
		len = slen;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
