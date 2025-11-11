#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned char uc;
	unsigned char *sp;

	uc = (unsigned char) c;
	sp = (unsigned char *) s;
	while (n--)
	{
		*sp++ = uc;
	}
	return (s);
}
