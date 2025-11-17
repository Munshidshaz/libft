/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:11:00 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/17 15:11:02 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
