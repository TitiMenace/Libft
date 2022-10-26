int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
			i++;
	return (i);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
			i++;
	return (s1 - s2);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	if (!size)
			return (ft_strlen((char *)src));i
	i = 0;
	while (i < size - 1 && src[i])
	{
		if (i <= (size_t)ft_strlen((char *)src)
				dest[i] = src[i];
		else
				dest[i] = 0;
		i++;
	}
	dest[i] = 0;
	return (ft_strlen((char *)src));
}

static size_t	ft_strnlen(char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dest[i])
			i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t destlen;

	i = 0;
	j = 0;
	destlen = ft_strnlen(dest, size);
	while (i < size && dest[i])
			i++;
	if (i == size)
			return (i + ft_strlen((char *)src));
	while (src[j])
	{
		if (j < size - destlen - 1)
		{
			dest[i] = src[j];
			i++;
		}
		j++;
	}
	dest[i] = 0;
	return (destlen + j);
}

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	return (0);
}

char	*strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
			i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return (s[i]);
		i--;
	}
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
			i++;
	return (s1[i] - s2[i]);
}

char *ft_strnstr(const char *to, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!find[0])
			return ((char *)to);
	while (to[i] && i < len)
	{
		j = 0;
			while (to[i + j] == find[j] && i + j < len)
			{
					j++;
					if (!find[j])
						return ((char *)&to[i]);
			}
			i++;
	}
	return (NULL);
}
