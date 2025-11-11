/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:39:15 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:40:45 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_pointer;
	const unsigned char	*src_pointer;

	dest_pointer = (unsigned char *) dest;
	src_pointer = (const unsigned char *) src;
	if (dest_pointer < src_pointer)
	{
		while (n--)
		{
			*dest_pointer++ = *src_pointer++;
		}
	}
	else if (dest_pointer > src_pointer)
	{
		dest_pointer += (n - 1);
		src_pointer += (n - 1);
		while (n--)
		{
			*dest_pointer-- = *src_pointer--;
		}
	}
	return (dest);
}
