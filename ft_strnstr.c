#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	z;
	size_t	little_len;

	i = 0;
	little_len = 0;
	
	while (little[little_len])
	{
		little_len++;
	}
	if (little_len == 0)
	{
		return ((char *)big);
	}
	while (i <= len - little_len && big[i])
	{
		z = 0;
		while (little[z] == big [i + z] && (i + z) < len)
		{
			z++;
		}
		if (little[z] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
