/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:25:55 by mpedroso          #+#    #+#             */
/*   Updated: 2022/10/28 16:52:02 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_chr(const char *str, int c)
{
	while (*str != '\0' && c != *str)
		str++;
	if (c == *str)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		slen;

	if (!s1 || !set)
		return (NULL);
	slen = ft_strlen(s1);
	i = 0;
	k = 0;
	while (find_chr(set, s1[i]))
		i++;
	while (slen > i && find_chr(set, s1[slen]))
		slen--;
	return (ft_substr(s1, i, (slen - i) + 1));
}
