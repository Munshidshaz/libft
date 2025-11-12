/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:17:44 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/12 18:08:43 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	size_t	src_len;
	size_t	i;
	char	*sub_string;

	i = 0;
	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	sub_len = src_len - start;
	if (start > src_len)
		return (ft_strdup(""));
	if (sub_len < len)
		len = sub_len;
	sub_string = ft_calloc((len + 1), sizeof(char));
	if (sub_string == NULL)
		return (NULL);
	while (i < len)
	{
		sub_string[i] = s[start + i];
		i++;
	}
	return (sub_string);
}
