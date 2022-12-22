/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancandei <ancandei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:46:37 by ancandei          #+#    #+#             */
/*   Updated: 2022/12/13 00:51:10 by ancandei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/* libc functions */

int	ft_isalpha(int a);

int	ft_isdigit(int arg);

int	ft_isalnum(int b);

int	ft_isascii(int a);

int	ft_isprint(int arg);

void	*ft_memcpy(void *dest, const void *src, size_t n)

void		*ft_memmove(void *str1, const void *str2, size_t n);

#endif