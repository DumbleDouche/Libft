/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 03:51:24 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 04:10:12 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*src;

	if (!str1 || !str2)
		return ((void *)0);
	dest = str1;
	src = str2;
	while (n--)
		*dest++ = *src++;
	return (str1);
}
