/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancandei <ancandei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:20:29 by ancandei          #+#    #+#             */
/*   Updated: 2022/12/14 18:21:04 by ancandei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *f, size_t len)
{
	size_t		n;
	size_t		a;

	n = 0;
	a = 0;
	if (((char *)f)[a] == '\0')
		return ((char *)str);
	if (!len)
		return (0);
	while (((char *)str)[n] && n < len)
	{
		a = 0;
		while (((char *)str)[n + a] == ((char *)f)[a] && \
		((char *)f)[a] && (n + a) < len)
			a++;
		if (((char *)f)[a] == '\0')
			return (((char *)str) + (n));
		n++;
	}
	return (NULL);
}
