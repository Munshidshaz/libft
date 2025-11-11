#include "libft.h"
size_t	str_len(const char *str)
{
	size_t	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst,const char *src, size_t dsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	i = 0;
	src_len = str_len(src);
	dst_len = str_len(dst);
	if (dsize <= dst_len)
	{
		return (dst_len + src_len);
	}
	while (src[i] && (dst_len + i) < dsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst [dst_len + i] = '\0'; 
	return ( dst_len + src_len);
}
