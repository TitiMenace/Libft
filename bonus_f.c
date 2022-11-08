#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if(!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}	

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
	(*lst) = new;
}

int	ft_lstsize(t_list *lst)
{
	int	i;
	
	if(!lst)
		return (0);
	i = 1;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
}

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

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return;
	while(lst != NULL)
	{
		(*del)(lst);
		free(lst);
		lst = lst->next;
	}
	return;
}

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

void	ft_lstiter(t_list *lst void (*f)(void *))
{
	if(!lst)
		return;
	if (!(*f))
		return;
	while (lst != NULL)
	{
		*f(lst->content);
		lst = lst->next;
	}
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_start;
	t_list	*new_end;
	
	while(lst != NULL)
	{
		new = malloc(sizeof(t_list));
		if(!new_end)
			ft_lstclear(&new_start);
		if((*f)(lst))
		{
			new_end->content = (*f)(lst->content)
			lst = lst->next;
			new_end = new_end->next;
		}
		else
			ft_lstclear(&new_start);
			
			 
	}
	return (new_start);
}













