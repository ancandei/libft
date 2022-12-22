/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancandei <ancandei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:05:26 by ancandei          #+#    #+#             */
/*   Updated: 2022/12/13 00:46:07 by ancandei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	nu;

	nu = n;
	if (str1 > str2)
	{
		while (nu--)
			((char *)str1)[nu] = ((char *)str2)[nu];
	}
	else
		ft_memcpy(str1, str2, n);
	return (str1);
}
