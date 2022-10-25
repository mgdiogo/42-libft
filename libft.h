/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:33:25 by mpedroso          #+#    #+#             */
/*   Updated: 2022/10/25 19:23:03 by mpedroso         ###   ########.fr       */
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

int		ft_atoi(char *str);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

int		ft_tolower(int c);

int		ft_toupper(int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

char	*ft_strnstr(const char *big, const char *little, size_t len);

void	ft_bzero(void *s, size_t n);

#endif
