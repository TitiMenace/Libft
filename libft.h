/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmechety <rmechety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:52:24 by rmechety          #+#    #+#             */
/*   Updated: 2021/10/19 15:08:54 by rmechety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/* -------------------------------------------------------------------------- */
/*                              FILE = ./atoi.c                               */
/* -------------------------------------------------------------------------- */
int	ft_atoi(char *str);

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

/* -------------------------------------------------------------------------- */
/*                           FILE = ./MemFonction.c                           */
/* -------------------------------------------------------------------------- */
void	*ft_memset(void *ptr, int value, size_t count);
void	ft_bzero(void *ptr, size_t count);
void	*ft_memcpy(void *dest, void *src, size_t count);
void	*ft_memccpy(void *dest, void *src, int c, size_t count);
void	*ft_memmove(void *dest, void *src, size_t count);


#endif
