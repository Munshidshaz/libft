/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:31:37 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/17 18:21:23 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	unsigned char			*d;	
	const unsigned char		*s;

	if (!dst && !src)  
		return (0);
	if (n == 0 || (dst == src))
		return (dst);	
	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
