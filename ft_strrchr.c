/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:16:12 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 15:16:55 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == (char) c)
		{
			temp = (char *)s;
		}
		s++;
	}
	if (*s == (char) c)
	{
		temp = (char *)s;
	}
	return (temp);
}
