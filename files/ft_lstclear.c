#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextnode;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nextnode = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nextnode;
	}
}
