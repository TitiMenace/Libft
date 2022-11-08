/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:27:48 by tschecro          #+#    #+#             */
/*   Updated: 2022/11/08 05:28:17 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while ((*lst) != NULL)
	{
		if((*lst)->next == NULL)
		{
			(*lst)->next = new;
			new->next = NULL;
		}
		(*lst) = (*lst)->next;
	}
}
