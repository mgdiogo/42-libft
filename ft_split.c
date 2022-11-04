/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:26:46 by mpedroso          #+#    #+#             */
/*   Updated: 2022/11/04 18:02:42 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cp(char const *s, char c)
{
	int	p;
	int	i;

	i = 0;
	p = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			p++;
		i++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;
	int		k;
	int		p;

	p = cp((char *)s, c);
	strings = (char **)malloc(sizeof(char *) * (p + 1));
	if (!strings)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < p)
	{
		while (s[i] == c && s[i])
			i++;
		k = i;
		while (s[i] != c && s[i])
			i++;
		strings[j++] = ft_substr(s, k, i - k);
	}
	strings[p] = 0;
	return (strings);
}
