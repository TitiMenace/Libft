/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:13:15 by tschecro          #+#    #+#             */
/*   Updated: 2022/11/09 06:59:07 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	
	str = (char *)s;
	i = 0;
	while (str[i] != (char)c && str[i])
		i++;
	if (str[i] == (char)c)
		return (&str[i]);
	return (NULL);
}
