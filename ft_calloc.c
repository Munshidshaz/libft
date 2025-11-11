/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:59:00 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:01:27 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	b_zero(void	*s, size_t n)
{
	size_t			p;
	unsigned char	*sp;

	sp = (unsigned char *) s;
	p = 0;
	while (p < n)
	{
		sp[p] = 0;
		p++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;
	size_t	total_size;
	size_t	max_size;

	max_size = (size_t) ~ 0;
	if (size != 0 && nmemb > max_size / size)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	temp = malloc(total_size);
	if (temp == NULL)
	{
		return (NULL);
	}
	b_zero (temp, total_size);
	return (temp);
}
