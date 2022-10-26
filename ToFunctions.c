int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
			c = c - 32;
			return (c);
	}
	return (0);
}

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (0);
}

