/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:52:08 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:52:16 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char) c)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
