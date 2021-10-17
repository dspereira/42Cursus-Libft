#include "libft.h"

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
