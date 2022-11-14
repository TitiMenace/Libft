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

static int	checkcharset(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

static int getlen(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(checkcharset(s1[i], set) == 1 && s1[i])
			i++;
	while (checkcharset(s1[i], set) == 0 && s1[i])
	{
			i++;
			count++;
	}
	return (count);
}

static char *alloc_trim(char const *s1, char const *set)
{
	char *dest;
	int count;
	
	count = getlen(s1, set);
	dest = malloc(sizeof(char) * count + 1);
	if (!dest)
		return (NULL);
	return (dest);

}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int	i;
	int	j;

	if (!set)
		return (ft_strdup(s1));
	str = alloc_trim(s1, set);
	if (!str)
		return (NULL);
	j = 0;
	while (checkcharset(s1[j], set) == 1 && s1[j])
			j++;
	i = 0;
	while(checkcharset(s1[j], set) == 0 && s1[j])
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main()
{
	printf("%s", ft_strtrim("yesmecyes", "yes"));
}
*/
