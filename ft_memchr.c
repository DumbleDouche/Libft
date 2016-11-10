/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:48:35 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/10 18:42:22 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ret;

	if (!str)
		return ((void *)0);
	ret = (unsigned char *)str;
	while (n--)
	{
		if (*ret == (unsigned char)c)
			return (ret);
		++ret;
	}
	return (NULL);
}
