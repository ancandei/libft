/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancandei <ancandei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:58:36 by ancandei          #+#    #+#             */
/*   Updated: 2022/12/17 01:11:27 by ancandei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	w1;
	size_t	w2;

	i = 0;
	w1 = ft_strlen(dest);
	w2 = ft_strlen(src);
	if (size <= w1)
	{
		return (w2 + size);
	}
	while (src[i] != '\0' && (w1 + i < size - 1))
	{
		dest[w1 + i] = src[i];
		i++;
	}
	dest[w1 + i] = '\0';
	return (w1 + w2);
}
