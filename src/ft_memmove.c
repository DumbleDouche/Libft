/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 07:23:42 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/15 19:59:42 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*src;

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
