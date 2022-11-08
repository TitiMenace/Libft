/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:28:59 by tschecro          #+#    #+#             */
/*   Updated: 2022/11/08 05:29:18 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!(*lst))
		return;
	while ((*lst) != NULL)
	{
		del((*lst)->content);
		free((*lst));
		(*lst) = (*lst)->next;
	}
	*lst = NULL;
	return;
}
