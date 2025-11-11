/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:00:23 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 15:01:20 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	size_t	str_len;
	size_t	index;
	char	*ptr;

	index = 0;
	if (!s)
		return (ft_strdup(""));
	str_len = ft_strlen(s);
	ptr = malloc((str_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[index])
	{
		ptr[index] = (*f)(index, s[index]);
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
