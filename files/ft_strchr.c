/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:18:07 by mpedroso          #+#    #+#             */
/*   Updated: 2022/11/04 18:18:56 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while ((unsigned char)*str && (unsigned char)c != (unsigned char)*str)
		str++;
	if ((unsigned char)c == (unsigned char)*str)
		return ((char *)str);
	return (0);
}
