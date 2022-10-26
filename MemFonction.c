void	ft_memset(void *ptr, int value, size_t count)
{
	size_t	i;
	
	i = 0;
	while (i < count)
	{
		(char *)ptr[i] = (char)value;
		i++;
	}
	return (ptr);
}

void	ft_bzero(void *ptr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		(char *)ptr[i] = 0;
		i++;
	}
}

void	ft_memcpy(void *dest, void *src, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		(char *)dest[i] = (char *)src[i];
		i++;
	}
	return (dest);
}

void	*ft_memccpy(void *dest, void *src, int c, size_t count)
{
	size_t i;
	
	i = 0;
	while (i < count)
	{
		if ((char *)src[i] == (char)c)
				return (dest);
		(char *)dest[i] = (char *)src[i];
		i++;
	}
	return NULL;
}

void	*ft_memmove(void *dest, void *src, size_t count)
{
	size_t i;

	if (dest > src)
	{
		i = count - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < count)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}

