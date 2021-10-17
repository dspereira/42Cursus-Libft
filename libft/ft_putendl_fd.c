#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd >= 0)
	{
		while (*s != '\0')
		{
			write(fd, &(*s), 1);
			s++;
		}
		write(fd, "\n", 1);
	}		
}
