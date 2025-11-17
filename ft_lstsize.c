#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *current;
	int	size;
	
	size = 0;
	current = lst;
	while (current)
	{
		size++;
		current = current->next;
	}	
	return (size);
}
