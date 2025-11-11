#include "libft.h"
#include <unistd.h>

void	ft_putchar(char c, int	fd)
{
	write(fd, &c, sizeof(char));
}

void	ft_putnbr_fd(int n, int fd)
{
	long nb; 
	
	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar('-', fd);
		nb = -nb;
	}
	if ( nb > 9)
	{
		ft_putnbr_fd((int)(nb / 10), fd);
	}
	ft_putchar((char) (nb % 10 + '0'), fd);
}
