/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:43:25 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 14:44:49 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd((int)(nb / 10), fd);
	}
	ft_putchar((char)(nb % 10 + '0'), fd);
}
