#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	buff[n];
	size_t			i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (i < n)
	{
		buff[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = buff[i];
		i++;
	}
	return (dst);
}
