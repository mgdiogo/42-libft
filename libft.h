/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:33:25 by mpedroso          #+#    #+#             */
/*   Updated: 2022/10/28 17:42:36 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

int		ft_isdigit(int c);

int		ft_isalpha(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *str, int c, size_t n);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int		ft_atoi(const char *str);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

int		ft_tolower(int c);

int		ft_toupper(int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

char	*ft_strnstr(const char *big, const char *little, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

char	*ft_strdup(const char *s);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

#endif
