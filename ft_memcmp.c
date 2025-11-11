#include "libft.h"

int	memcmp (const void *s1, const void *s2, size_t n)
{
	unsigned const char *s1p;
	unsigned const char *s2p;
	size_t	i;

	i = 0;
	s1p = (unsigned const char *) s1;
	s2p = (unsigned const char *) s2;
	while ( i < n)
	{
		if ( s1p[i] != s2p[i])
		{
			return ((int) s1p[i] - (int) s2p[i]);
		}
		i++;

	}
	return (0);
}
