#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

size_t	get_size(char const *s, char c)
{
	size_t	i;
	size_t	size;
	int		flag;

	i = 0;
	flag = 0;
	size = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && !flag)
		{
			size++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (size + 1);
}

char	*get_str(char const *s, char c, size_t offset)
{
	size_t	init;
	size_t	end;

	init = offset;
	while (s[offset] != c && s[offset] != '\0')
		offset++;
	end = offset;
	return (ft_substr(s, init, (end - init)));
}

char	**ft_split(char const *s, char c)
{
	size_t	arr_size;
	char	**arr;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	arr_size = get_size(s, c);
	arr = malloc(arr_size * sizeof(char *));
	if (!arr)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			arr[j] = get_str(s, c, i);
			i += ft_strlen(arr[j]) - 1;
			j++;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}
