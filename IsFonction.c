int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
			return (1);
	return (0);
}

int ft_isdigit(int c)
{
	if (c >= '1' && c <= '9')
			return (1);
	return (0);
}

int isalnum(int c)
{
	if (ft_isalpha == 1 || ft_isdigit == 1)
			return (1);
	return (0);
}

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
			return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
			return (1);
	return (0);
}

