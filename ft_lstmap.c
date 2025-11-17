/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:11:50 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/17 15:12:36 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_nodedel(t_list **list, void *content, void (*del)(void *))
{
	del(content);
	ft_lstclear(list, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*list;
	t_list	*node;
	void	*temp_content;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		temp_content = f(lst->content);
		if (!temp_content)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		node = ft_lstnew(temp_content);
		if (!node)
		{
			ft_nodedel(&list, temp_content, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
