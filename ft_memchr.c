/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:25:47 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:27:20 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sp;
	unsigned char	uc;

	sp = (unsigned char *)s;
	uc = (unsigned char) c;
	while (n--)
	{
		if (*sp == uc)
		{
			return ((void *) sp);
		}
		sp++;
	}
	return (NULL);
}
