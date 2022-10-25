/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:38:00 by marvin            #+#    #+#             */
/*   Updated: 2022/10/16 17:38:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] != c)
    {
        i++;
    }
    if (str[i] != c)
        return (NULL);
    return ((char *)&str[i]);

}

/*int main(void)
{
	char *str = "boastudobem";
	int c = '.';

	printf("%s", ft_strchr(str, c));
}*/