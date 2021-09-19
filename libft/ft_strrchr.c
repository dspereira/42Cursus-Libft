char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	if (!s)
		return (0);
	if (s[i] == (char)c)
		ptr = (char *) &s[i];
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == (char)c)
			ptr = (char *) &s[i];
	}
	return (ptr);
}
