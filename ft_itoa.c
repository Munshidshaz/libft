/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:16:22 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/12 18:55:03 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdlib.h>

size_t	ft_n_len(int n)
{
	size_t	i;
	long	nb;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*ptr;
	long long	nb;

	len = ft_n_len(n);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	nb = n;
	ptr[len] = '\0';
	if (nb == 0)
		ptr[0] = '0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ptr[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (ptr);
}
