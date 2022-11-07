#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *dest;
	int	i;

	dest = malloc(sizeof(char) * ft_strlen(str) + 1);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
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
	size_t i;
	
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
		dest[i] = s2[j];
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

int	get_len(const char *str, const char *set)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if (checkcharset(str[i], set) == 0)
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

int	ft_ischarset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

unsigned int	ft_countword(char const *str, char charset)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (ft_ischarset(str[i], charset) && str[i])
			i++;
		if (!ft_ischarset(str[i], charset) &&str[i])
			count++;
		while (!ft_ischarset(str[i], charset) && str[i])
			i++;
	}
	return (count);
}

int	lenword(char const *str, char charset)
{
	unsigned int	i;

	i = 0;
	while(ft_ischarset(str[i], charset) && str[i])
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	char			**out;

	out = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (out == NULL || s == NULL)
		return (0);
	i = 0;
	x = 0;
	while (x < ft_countword(s, c))
	{
		j = 0;
		while (ft_ischarset(s[i], c) && s[i])
			i++;
		out[x] = malloc(sizeof(char) * (lenword(&s[i], c) + 1));
		while (!ft_ischarset(s[i], c) && s[i])
			out[x][j++] = s[i++];
		out[x][j] = 0;
		x++;
	}
	out[x] = 0;
	return (out);
}

unsigned int	countdown(int n)
{
	unsigned int	count;
	if (n <= 0)
		count = 1;
	else
		count  = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	count;
	char			k;
	char			*str;

	count = countdown(n);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return NULL;
	str[count] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		k = n % 10;
		if (n < 0)
			k = -k;
		str[--count] = (k + '0');
		n /= 10;
	}
	return (str);
}

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char*))
{
	int	i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!out)
		return (NULL);
	while (i < ft_strlen(s))
	{
		dest[i] = (f)(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
