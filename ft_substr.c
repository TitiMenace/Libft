#include "libft.h"

static int	getlen(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	
	count = 1;
	while(s[start] && count <= len)
	{
			count++;
			start++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	size_t			i;
	size_t			count;
	
	if ((int)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	count = getlen(s, start, len);
	s2 = malloc(sizeof(char) * count);
	if (!s2)
		return (NULL);
	i = 0;
	while(s[start] && i < len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = 0;
	return (s2);
}

/*#include <stdio.h>
int	main()
{
	printf("%s", ft_substr("tripouille", 0, 42000));
}
*/
