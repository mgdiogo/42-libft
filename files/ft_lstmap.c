/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:53:08 by mpedroso          #+#    #+#             */
/*   Updated: 2022/11/08 12:53:16 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*tempn;

	nlist = 0;
	while (lst)
	{
		tempn = ft_lstnew((f)(lst->content));
		if (!tempn)
			ft_lstclear(&tempn, del);
		ft_lstadd_back(&nlist, tempn);
		lst = lst->next;
	}
	return (nlist);
}
