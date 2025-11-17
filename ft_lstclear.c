/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:07:57 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/17 15:07:58 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
