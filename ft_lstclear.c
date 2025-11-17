#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;
	t_list	*current;	

	if (!lst || !(*del))
		return ;
	current = *lst;
	while (current != NULL)
	{
		next_node = current->next;
		(*del)(current->content);
		free(current);
		current = next_node;
	}
	*lst = NULL;
	return ;
}
