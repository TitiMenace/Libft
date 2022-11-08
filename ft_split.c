/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:21:56 by tschecro          #+#    #+#             */
/*   Updated: 2022/11/08 05:22:58 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_ischarset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static unsigned int	ft_countword(char const *str, char charset)
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

static int	lenword(char const *str, char charset)
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
