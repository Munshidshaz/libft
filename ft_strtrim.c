#include "libft.h"
#include <stdlib.h>

size_t	ft_trim_locate(char const str_chr, char const *set)
{
	size_t	set_index;

	set_index = 0;
	while (set[set_index])
	{
		if (str_chr == set[set_index])
		{
			return (1);
		}
		set_index++;
	}
	return (0);
}

size_t	ft_trim_index(char const *src, char const *set, size_t begin)
{
	size_t	index;

	index = 0;
	if (begin == index)
	{
		while (src[index] && 1 == ft_trim_locate(src[index], set))
		{
			index++;
		}
		return (index);
	}
	else
	{
		index = begin;
		while (index > 0 && 1 == ft_trim_locate(src[index], set))
		{
			index--;
		}
		if (index == 0 && 1 == ft_trim_locate(src[index], set))
		{
			return (0);
		}
		return (index);
	}
}

void	ft_sub_cpy(char const *src, char *dst, size_t start, size_t end)
{
	size_t	dst_index;

	dst_index = 0;
	while (dst_index <= (end - start))
	{
		dst[dst_index] = src [start + dst_index];
		dst_index++;
	}
	dst[dst_index] = '\0';
}

void	*ft_malloc(size_t size)
{
	char	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	start;
	size_t	end;
	size_t	new_string_len;
	char	*new_string;

	s1_len = ft_strlen(s1);
	end = s1_len - 1;
	start = ft_trim_index(s1, set, 0);
	end = ft_trim_index(s1, set, end);
	if (start >= s1_len)
	{
		new_string = ft_malloc(1 * sizeof(char));
		new_string[0] = '\0';
		return (new_string);
	}
	new_string_len = (end - start) + 1;
	new_string = malloc((new_string_len + 1) * sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	ft_sub_cpy(s1, new_string, start, end);
	return (new_string);
}
