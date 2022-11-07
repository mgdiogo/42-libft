/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:09:03 by mpedroso          #+#    #+#             */
/*   Updated: 2022/11/04 19:24:19 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *cont = malloc(sizeof(t_list));
	if (!cont)
		return (NULL);
	cont->content = content;
	cont->next = NULL;
	
	return (cont);
}