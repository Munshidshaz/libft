/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:54:35 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:56:55 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_sec_memcpy(void *dst, void const *src, size_t len)
{
	if (src)
	{
		ft_memcpy(dst, src, len);
	}
}

size_t	ft_sec_strlen(const char *str)
{
	size_t	len;

	len = 0;
	if (str)
	{
		len = ft_strlen(str);
	}
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	new_string_len;
	char	*new_string;

	s1_len = ft_sec_strlen(s1);
	s2_len = ft_sec_strlen(s2);
	new_string_len = (s1_len + s2_len);
	new_string = malloc((new_string_len + 1) * sizeof(char));
	if (new_string == NULL)
	{
		return ((char *) NULL);
	}
	ft_sec_memcpy(new_string, s1, s1_len);
	ft_sec_memcpy((char *) &new_string[s1_len], s2, s2_len);
	new_string[new_string_len] = '\0';
	return (new_string);
}
