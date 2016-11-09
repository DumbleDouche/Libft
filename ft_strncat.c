/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:03:05 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 23:45:12 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*ret;
	size_t	len;

	ret = dest;
	if (!dest || !src)
		return (NULL);
	while (*ret)
		ret++;
	len = ft_strlen(src);
	while (len-- && *src && n--)
	{
		*ret = *src;
		src++;
		ret++;
	}
	*ret = '\0';
	return (dest);
}
