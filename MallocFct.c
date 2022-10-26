char	*strdup(char *str)
{
	char *dest;
	int	i;

	dest = malloc(sizeof(char) * ft_strlen(str) + 1);
	i = 0;
	while (str[i])
	{
		dest[i] == str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;

	out = malloc (size * nmemb);
	if (!out)
			return (NULL);
	ft_bzero(out, nmemb  * size);
	return (out);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	int i;
	
	if (len < 0)
			return (NULL);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest = '\0';
	return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *dest;
	int i;
	int j;
	
	if (!s1 && !s2)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i] = s2[j]
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	checkcharset(char c, const char *set)
{
	int	i;
	
	i = 0;
	while (set[i])
	{
		if (c == set[i])
				return(1);
		i++;
	}
	return (0);
}

int	get_len(char *str, char *set)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (s1[++i])
	{
		if (checkcharset(s1[i], set) == 0)
			count++;
	}
	return (count);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char *dest;

	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (NULL);
	dest = malloc(sizeof(char) * get_len(s1, set) + 1);
	if (!dest)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
	{
		if (checkcharset(s1[i], set) == 0)
				dest[++j] = s1[i];
	}
	dest[j++] = '\0';
	return (dest);
}


