/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancandei <ancandei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:05:10 by ancandei          #+#    #+#             */
/*   Updated: 2022/11/30 12:05:10 by ancandei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*d;
	const char		*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}