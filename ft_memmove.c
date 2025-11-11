#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_pointer;
	const unsigned char 	*src_pointer;

	dest_pointer = (unsigned char *) dest;
	src_pointer = (const unsigned char *) src;

	if (dest_pointer < src_pointer)
	{
		while (n--)
		{
			*dest_pointer++ = *src_pointer++;
		}
	}
	else if (dest_pointer > src_pointer)
	{
		dest_pointer += (n - 1);
		src_pointer += (n - 1);

		while (n--)
		{
			*dest_pointer-- = *src_pointer--;	
		}
	}
	return (dest);

}
