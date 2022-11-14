int	checkcharset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
				return (1);
		i++;
	}
}

size_t	countword(const char *s, const char *set)
{	
		size_t	count;
		int	i;

		i = 0;
		count = 0;
		while (s[i] && checkcharset(s[i], set) == 1)
			i++;
		while(s[i])
		{
			if(checkcharset(s[i], set) == 0 && (checkcharset(s1\[i+1], set) == 1 || s[i+1] == '\0'))
					count++;
			i++;
		}
		return (count);
}

char	**init_tab(size_t count)
{
	char	**dest;

	dest = malloc(sizeof(char *) * count + 1);
	if (!dest)
			return (NULL);
	return (dest);
}

char	*fill_str(const char *s, const char *set)
{
	char *dest;
	int i;

	dest = s;
	i = 0;
	while (checkcharset(dest[i], set) == 1)
			i++;
	while (dest[i])
	{
		if (checkcharset(dest[i], set) == 1)
				dest[i] = '\0';
		i++:
	}
	return (dest);
}

char	**ft_split(const char *s, const char *set)
{
	char **dest;
	size_t	count;
	int	i;
	int	j;
	char *str;

	str = fill_str(s, set);
	count = countword(s, set);
	dest = init_tab(count);
	i = -1;
	j = -1;
	while(i <= count + 1 && str[++j])
	{
			while (checkcharset(str[++j], set) == 1)
			dest[++i] = ft_strdup(&str[j]);
			if(!dest[i])
			{
				while(--i <= 0)
					free(dest[i--]);
			}
			while(str[++j])
				j++;
	}
	dest[i] = (NULL);
}







tab = malloc(sizeof(char *) * count + sizeof(char) * strlen(str) - nbcharset + count);:wq







