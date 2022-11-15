/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:28:59 by tschecro          #+#    #+#             */
/*   Updated: 2022/11/15 00:16:57 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (del && *lst && lst)
	{
		while (lst && *lst)
		{
			temp = (*lst)->next;
			ft_lstdelone((*lst), del);
			*lst = temp;
		} 
	}

}
