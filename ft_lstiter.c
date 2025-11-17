#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*itr;

	if (!lst || !(*f))
		return ;
	itr = lst;
	while (itr != NULL)
	{
		(*f)(itr->content);
		itr = itr->next;
	}
	return ;
}
