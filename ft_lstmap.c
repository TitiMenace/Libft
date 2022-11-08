/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:30:11 by tschecro          #+#    #+#             */
/*   Updated: 2022/11/08 06:37:26 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_start;
	t_list	*new_end;
	
	while(lst != NULL)
	{
		new_start = malloc(sizeof(t_list));
		if(!new_end)
			ft_lstclear(&new_start, del);
		if((*f)(lst))
		{
			new_end->content = (*f)(lst->content);
			lst = lst->next;
			new_end = new_end->next;
		}
		else
			ft_lstclear(&new_start, del);
			
			 
	}
	return (new_start);
}
