#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	n -= 1;
	while (n != 0)
	{
		((char *) dst)[n] = ((char *) src)[n];
		n--;
	}
	((char *) dst)[n] = ((char *) src)[n];
	return (dst);
}
