#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd > 0)
	{
		while (*s != '\0')
		{
			write(fd, &(*s), 1);
			s++;
		}
	}	
}
