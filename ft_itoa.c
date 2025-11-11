/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:16:22 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:25:01 by mmohamm2         ###   ########.fr       */
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

char	*ft_converter(int n, char *ptr, size_t len)
{
	long	nb;
	int		ln;

	nb = n;
	ptr[len] = '\0';
	len--;
	if (nb == 0)
	{
		ptr[len] = '0';
		return (ptr);
	}
	if (nb < 0)
	{
		nb = -nb;
		ptr[0] = '-';
	}
	while (nb > 0)
	{
		ln = nb % 10;
		ptr[len] = '0' + ln;
		len--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ptr;

	len = ft_n_len(n);
	ptr = ft_calloc((len + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	ft_converter(n, ptr, len);
	return (ptr);
}
