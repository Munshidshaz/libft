#include "libft.h"

size_t	skip_space(const char *arr)
{
	size_t	i;

	i = 0;
	while ((arr[i] >= 9 && arr[i] <= 13) || arr[i] == 32)
	{
		i++;
	}
	return (i);
	
}
int	ft_atoi (const char *nptr)
{
	size_t	i;
	int	n;
	long	buff;

	i = 0;
	n = 1;
	i = skip_space(nptr);
	if ( nptr[i] == '-' || nptr[i] == '+')
	{	if (nptr[i] == '-')
		{
			n = -1;
		}
		i++;
	}
	buff = 0;
	while ( nptr[i] >= '0' && nptr[i] <= '9')
	{
		buff = (buff * 10) + (nptr[i] - '0');
		
		if ( buff > 2147483647L)
		{
			if (n == 1)
			{
				return (2147483647);
			}
			else if (n == -1)
			{
				return (-2147483648);
			}
		}
		i++;
	}
	return ((int)buff * n);

}
