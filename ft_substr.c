#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	size_t	src_len;
	char	*sub_string;

	
	if (!s || (ft_strlen(s) < start) || len == 0)
	{
		return ((char *)NULL);
	}
	src_len = ft_strlen(s);
	sub_len = src_len - start;
	if ( sub_len < len )
	{
		len = sub_len;
	}
	sub_string = malloc((len + 1) * sizeof(char));
	if ( sub_string == NULL)
	{
		return ((char *) NULL);
	}
	ft_memcpy(sub_string,&s[start],len);
        sub_string[len] = '\0';	
	return (sub_string);
}
