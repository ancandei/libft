/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancandei <ancandei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:20:49 by ancandei          #+#    #+#             */
/*   Updated: 2022/12/14 18:21:04 by ancandei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;

	i = 0;
	if (!n)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (((char *)str)[i] == (char)c)
		{
			return ((void *)str + i);
		}
		i++;
	}
	return (NULL);
}
