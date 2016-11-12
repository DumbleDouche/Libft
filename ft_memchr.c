/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:48:35 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/12 17:59:57 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ret;

	ret = (unsigned char *)str;
	while (n--)
	{
		if (*ret == (unsigned char)c)
			return (ret);
		++ret;
	}
	return (NULL);
}
