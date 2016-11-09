/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:23:42 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 04:10:28 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*src;

	if (!str1 || !str2)
		return ((void *)0);
	dest = str1;
	src = str2;
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	src += n;
	dest += n;
	while (n--)
		*--dest = *--src;
	return (dest);
}
