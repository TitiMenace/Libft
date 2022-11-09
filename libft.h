/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmechety <rmechety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:52:24 by rmechety          #+#    #+#             */
/*   Updated: 2022/11/09 06:00:39 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}		t_list;

/* -------------------------------------------------------------------------- */
/*                          FILE = ./ft_lstdelone.c                           */
/* -------------------------------------------------------------------------- */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_memcmp.c                            */
/* -------------------------------------------------------------------------- */
int	ft_memcmp(const void *s1, const void *s2, size_t n);

/* -------------------------------------------------------------------------- */
/*                         FILE = ./ft_lstadd_front.c                         */
/* -------------------------------------------------------------------------- */
void	ft_lstadd_front(t_list **lst, t_list *new);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_memcpy.c                            */
/* -------------------------------------------------------------------------- */
void	*ft_memcpy(void *dest, void *src, size_t count);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_calloc.c                            */
/* -------------------------------------------------------------------------- */
void	*ft_calloc(size_t nmemb, size_t size);

/* -------------------------------------------------------------------------- */
/*                          FILE = ./ft_putendl_fd.c                          */
/* -------------------------------------------------------------------------- */
void	ft_putendl_fd(char *s, int fd);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_strnstr.c                            */
/* -------------------------------------------------------------------------- */
char *ft_strnstr(const char *to, const char *find, size_t len);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_isalpha.c                            */
/* -------------------------------------------------------------------------- */
int	ft_isalpha(int c);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_strtrim.c                            */
/* -------------------------------------------------------------------------- */
char *ft_strtrim(char const *s1, char const *set);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_lstclear.c                           */
/* -------------------------------------------------------------------------- */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_memmove.c                            */
/* -------------------------------------------------------------------------- */
void	*ft_memmove(void *dest, void *src, size_t count);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_isalnum.c                            */
/* -------------------------------------------------------------------------- */
int	ft_isalnum(int c);

/* -------------------------------------------------------------------------- */
/*                         FILE = ./ft_lstadd_back.c                          */
/* -------------------------------------------------------------------------- */
void	ft_lstadd_back(t_list **lst, t_list *new);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_strcmp.c                            */
/* -------------------------------------------------------------------------- */
int	ft_strcmp(const char *s1, const char *s2);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_isdigit.c                            */
/* -------------------------------------------------------------------------- */
int	ft_isdigit(int c);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_lstnew.c                            */
/* -------------------------------------------------------------------------- */
t_list	*ft_lstnew(void *content);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_lstsize.c                            */
/* -------------------------------------------------------------------------- */
int	ft_lstsize(t_list *lst);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_isprint.c                            */
/* -------------------------------------------------------------------------- */
int	ft_isprint(int c);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_tolower.c                            */
/* -------------------------------------------------------------------------- */
int ft_tolower(int c);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_toupper.c                            */
/* -------------------------------------------------------------------------- */
int	ft_toupper(int c);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_strncmp.c                            */
/* -------------------------------------------------------------------------- */
int	ft_strncmp(const char *s1, const char *s2, size_t n);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_strlen.c                            */
/* -------------------------------------------------------------------------- */
int	ft_strlen(const char *str);

/* -------------------------------------------------------------------------- */
/*                          FILE = ./ft_putstr_fd.c                           */
/* -------------------------------------------------------------------------- */
void	ft_putstr_fd(char *s, int fd);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_bzero.c                             */
/* -------------------------------------------------------------------------- */
void	ft_bzero(void *ptr, size_t count);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_memset.c                            */
/* -------------------------------------------------------------------------- */
void	*ft_memset(void *ptr, int value, size_t count);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_substr.c                            */
/* -------------------------------------------------------------------------- */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_strmapi.c                            */
/* -------------------------------------------------------------------------- */
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char*));

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_strchr.c                            */
/* -------------------------------------------------------------------------- */
char	*ft_strchr(const char *s, int c);

/* -------------------------------------------------------------------------- */
/*                             FILE = ./ft_atoi.c                             */
/* -------------------------------------------------------------------------- */
int	ft_atoi(char *str);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_isascii.c                            */
/* -------------------------------------------------------------------------- */
int	ft_isascii(int c);

/* -------------------------------------------------------------------------- */
/*                             FILE = ./ft_itoa.c                             */
/* -------------------------------------------------------------------------- */
char	*ft_itoa(int n);

/* -------------------------------------------------------------------------- */
/*                          FILE = ./ft_putchar_fd.c                          */
/* -------------------------------------------------------------------------- */
void	ft_putchar_fd(char c, int fd);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_strjoin.c                            */
/* -------------------------------------------------------------------------- */
char *ft_strjoin(char const *s1, char const *s2);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_split.c                             */
/* -------------------------------------------------------------------------- */
char	**ft_split(const char *s, char c);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_strlcat.c                            */
/* -------------------------------------------------------------------------- */
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_lstiteri.c                           */
/* -------------------------------------------------------------------------- */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_lstmap.c                            */
/* -------------------------------------------------------------------------- */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* -------------------------------------------------------------------------- */
/*                          FILE = ./ft_putnbr_fd.c                           */
/* -------------------------------------------------------------------------- */
void	ft_putnbr_fd(int nb, int fd);

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_memchr.c                            */
/* -------------------------------------------------------------------------- */
void	*ft_memchr(const void *s, int c, size_t n);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_strrchr.c                            */
/* -------------------------------------------------------------------------- */
char	*ft_strrchr(const char *s, int c);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_striteri.c                           */
/* -------------------------------------------------------------------------- */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* -------------------------------------------------------------------------- */
/*                            FILE = ./ft_strdup.c                            */
/* -------------------------------------------------------------------------- */
char	*ft_strdup(const char *str);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_lstlast.c                            */
/* -------------------------------------------------------------------------- */
t_list	*ft_lstlast(t_list *lst);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ft_strlcpy.c                            */
/* -------------------------------------------------------------------------- */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);


#endif
