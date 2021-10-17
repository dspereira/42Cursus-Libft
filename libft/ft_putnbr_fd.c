#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	char		c;

	if (fd < 0)
		return ;
	nb = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 10)
		ft_putnbr_fd((nb / 10), fd);
	c = nb - ((nb / 10) * 10) + 48;
	write(fd, &c, 1);
}
