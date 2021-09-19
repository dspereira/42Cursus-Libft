#include <stdlib.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	str = malloc(len * sizeof(char));
	if (!str)
		return (0);
	ft_memcpy(str, s1, len);
	return (str);
}
