/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:52:43 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:53:21 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	str_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*str;
	size_t	i;

	i = 0;
	s_len = str_len(s);
	str = malloc((s_len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < s_len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
