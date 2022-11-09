/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:18:52 by tschecro          #+#    #+#             */
/*   Updated: 2022/11/09 09:49:06 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	unsigned long	j;
	char			*out;
	int				size;

	j = 0;
	i = start;
	if (len <= ft_strlen(s) - (int)start)
		size = len;
	else
		size = ft_strlen(s) - (size_t)start;
	if ((size_t)start >= ft_strlen(s))
		size = 0;
	out = malloc(sizeof(char) * (size + 1));
	if (!out)
		return (NULL);
	while (s[i] && j < (unsigned long)size)
	{
		out[j] = s[i];
		i++;
		j++;
	}
	out[j] = 0;
	return (out);
}

int	main()
{
	printf("%s", ft_substr("yolesmecs", 3, 4 ));
}
