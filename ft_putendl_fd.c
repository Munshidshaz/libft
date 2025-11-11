/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:42:36 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/11 16:53:37 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	char	endl;

	endl = '\n';
	if (s)
		write(fd, s, ft_strlen(s));
	write(fd, &endl, 1);
}
