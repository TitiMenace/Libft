/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:20:47 by tschecro          #+#    #+#             */
/*   Updated: 2022/11/08 05:21:39 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkcharset(char c, const char *set)
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

static int	get_len(const char *str, const char *set)
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
