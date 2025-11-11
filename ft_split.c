/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:51:28 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 18:40:14 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_tokens(char const *s, char c)
{
	size_t	token;

	token = 0;
	while (*s)
	{
		while (*s && *s == c)
		{
			s++;
		}
		if (*s)
		{
			token++;
		}
		while (*s && *s != c)
		{
			s++;
		}
	}
	return (token);
}

char	*ft_word(const char *start, const char *end)
{
	char	*ptr;
	size_t	str_len;

	str_len = (end - start);
	ptr = malloc(str_len + 1);
	if (!ptr)
	{
		return (NULL);
	}
	ft_strlcpy(ptr, start, str_len + 1);
	return (ptr);
}

int	ft_free_all(char **array, size_t index)
{
	size_t	sub_array;

	sub_array = 0;
	while (sub_array < index)
	{
		free(array[sub_array]);
		sub_array++;
	}
	free(array);
	return (1);
}

char	**ft_sub_array_gen(char const *s, char c, char **array)
{
	size_t	index;
	char	*start;

	index = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		start = (char *) s;
		while (*s && *s != c)
			s++;
		array[index] = ft_word(start, s);
		if (!array[index])
		{
			ft_free_all(array, index);
			return (NULL);
		}
		index++;
	}
	array[index] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (s == NULL)
	{
		return (NULL);
	}
	array = malloc((ft_tokens(s, c) + 1) * sizeof(char *));
	if (!array)
	{
		return (NULL);
	}
	array = ft_sub_array_gen(s, c, array);
	if (!array)
	{
		return (NULL);
	}
	return (array);
}
