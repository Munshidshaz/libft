/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:41:10 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:41:26 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*sp;

	uc = (unsigned char) c;
	sp = (unsigned char *) s;
	while (n--)
	{
		*sp++ = uc;
	}
	return (s);
}
