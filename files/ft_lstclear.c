#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	nextnode;

	while (*lst)
	{
		nextnode = lst->next;
		del(*lst);
		free(*lst);
		*lst = nextnode;
	}
}