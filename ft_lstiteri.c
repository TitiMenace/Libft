/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:29:28 by tschecro          #+#    #+#             */
/*   Updated: 2022/11/08 06:38:22 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(!lst)
		return;
	if (!(*f))
		return;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
