/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamm2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:02:30 by mmohamm2          #+#    #+#             */
/*   Updated: 2025/11/17 18:39:00 by mmohamm2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	z;
	size_t	little_len;

	i = 0;
	little_len = 0;
	while (little[little_len])
		little_len++;
	if (big == little || little_len == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		z = 0;
		while (big[i+z] && little[z] && little[z] == big [i + z] && (i + z) < len)
			z++;
		if (little[z] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
