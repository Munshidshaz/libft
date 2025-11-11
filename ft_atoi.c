/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:19:47 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 13:56:55 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*skip_space(const char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	return (str);
}

int	num_generator(const char *str)
{
	long	nb;
	size_t	i;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		if (nb > 2147483647L)
			return (2147483647);
		i++;
	}
	return ((int) nb);
}

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	nptr = skip_space(nptr);
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	nb = num_generator(nptr);
	nb *= sign;
	return (nb);
}
