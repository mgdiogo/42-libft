#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*tempn;

	while (lst)
	{
		tempn = ft_lstnew(f(lst->content));
		if (!tempn)
			del(tempn);
		ft_lstadd_back(&n_list, tempn);
		lst = lst->next;
		return (nlist);
	}
}
