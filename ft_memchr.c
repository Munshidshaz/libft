#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char * sp;
	unsigned char uc;

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
