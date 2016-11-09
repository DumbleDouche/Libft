/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:48:35 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 04:10:46 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*haystack;

	if (!str)
		return ((void *)0);
	haystack = (unsigned char *)str;
	while (n--)
	{
		if (*haystack == (unsigned char)c)
			return (haystack);
		++haystack;
	}
	return (NULL);
}
