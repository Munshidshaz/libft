#include "libft.h"
#include <stduni.h>

void	ft_putendl_fd(char *s, int fd)
{
	char endl;

	endl = '\n';
	if (s)
		write(fd, s, ft_strlen(s));		
	write(fd, &endl, 1);
}
