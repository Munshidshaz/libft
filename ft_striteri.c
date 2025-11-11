/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:53:50 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:54:10 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	if (!s)
		return ;
	while (*s)
	{
		(*f)(index, s);
		++s;
	}
}
