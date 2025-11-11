/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:57:33 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 19:27:54 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = str_len(src);
	dst_len = str_len(dst);
	i = 0;
	if (dsize <= dst_len)
	{
		dst[dsize] = '\0';
		return (dst_len + src_len);
	}
	while (src[i] && (dst_len + i) < (dsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if ((dst_len + i) < (dsize - 1))
		dst[dst_len + i + 1] = '\0';
	else
		dst[dsize] = '\0';
	return (dst_len + src_len);
}
