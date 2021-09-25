#include <stdlib.h>

int	str_size(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s || start >= str_size(s))
		return (0);
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
