#include <stdlib.h>

size_t	str_len(const char *str)
{
	size_t	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	dst_size = str_len(dst);
	src_size = str_len(src);
	if (size < dst_size)
		return (src_size + size);
	while (src[i] != '\0' && i < size - 1 - dst_size)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
