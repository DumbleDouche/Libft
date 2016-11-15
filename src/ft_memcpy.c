/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 03:51:24 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/13 17:49:39 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*src;

	dest = str1;
	src = str2;
	while (n--)
		*dest++ = *src++;
	return (str1);
}
