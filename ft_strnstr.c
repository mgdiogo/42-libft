/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:34:34 by mpedroso          #+#    #+#             */
/*   Updated: 2022/10/27 19:06:23 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while ((i < len) && big[i] != '\0')
	{
		k = 0;
		while (big[i + k] == little[k] && (i + k) < len)
		{
			if (little[k + 1] == '\0')
				return ((char *)big + i);
			k++;
		}
		i++;
	}
	return (0);
}
/*int main(void)
{
	const char *s1 = "boas tudo bem";
	const char *s2 = "astu";
	const char *s3 = "boas tudo bem";
	const char *s4 = "tudo";
	const char *s5 = "boas tudo bem";
	const char *s6 = "";
	char *final;
	char *final2;
	char *final3;
	final = ft_strnstr(s1, s2, 5);
	final2 = ft_strnstr(s3, s4, 9);
	final3 = ft_strnstr(s5, s6, 5);
	printf("Frase sem encontrar substring: %s\n", final);
	printf("Frase com substring: %s\n", final2);
	printf("Substring vazia: %s\n", final3);
}
*/