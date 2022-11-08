#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}		t_list;


/* -------------------------------------------------------------------------- */
/*                              FILE = ./atoi.c                               */
/* -------------------------------------------------------------------------- */
int	ft_atoi(char *str);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int nb, int fd);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./IsFonction.c                            */
/* -------------------------------------------------------------------------- */
int	ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int	ft_isprint(int c);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./ToFunctions.c                           */
/* -------------------------------------------------------------------------- */
int	ft_toupper(int c);
int ft_tolower(int c);

/* -------------------------------------------------------------------------- */
/*                           FILE = ./StrFonction.c                           */
/* -------------------------------------------------------------------------- */
int	ft_strlen(const char *str);
int	ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *to, const char *find, size_t len);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));

/* -------------------------------------------------------------------------- */
/*                            FILE = ./MallocFct.c                            */
/* -------------------------------------------------------------------------- */
char	*ft_strdup(const char *str);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
int	checkcharset(char c, const char *set);
int	get_len(const char *str, const char *set);
char *ft_strtrim(char const *s1, char const *set);
int     ft_ischarset(char c, char charset);
unsigned int    ft_countword(char const *str, char charset);
int     lenword(char const *str, char charset);
char    **ft_split(const char *s, char c);
unsigned int    countdown(int n);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char(*f)(unsigned int, char*));

/* -------------------------------------------------------------------------- */
/*                           FILE = ./MemFonction.c                           */
/* -------------------------------------------------------------------------- */
void	*ft_memset(void *ptr, int value, size_t count);
void	ft_bzero(void *ptr, size_t count);
void	*ft_memcpy(void *dest, void *src, size_t count);
void	*ft_memccpy(void *dest, void *src, int c, size_t count);
void	*ft_memmove(void *dest, void *src, size_t count);
/* -------------------------------------------------------------------------- */
/*                              FILE = ./bonus_f.c                               */
/* -------------------------------------------------------------------------- */
t_list *ft_lstnew(void *content;
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


#endif
