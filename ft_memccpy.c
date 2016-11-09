/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 05:55:39 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 04:08:58 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dest0;
	const unsigned char	*src0;

	if (!dest || !src)
		return ((void *)0);
	dest0 = dest;
	src0 = src;
	while (n--)
		if ((*dest0++ = *src0++) == (unsigned char)c)
			return (dest0);
	return (NULL);
}
