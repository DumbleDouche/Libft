/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:50:59 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 23:42:40 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*ret;
	size_t	len;

	if (!dest || !src)
		return (NULL);
	len = ft_strlen(src);
	ret = dest;
	while (*ret)
		ret++;
	while (len-- && *src)
	{
		*ret = *src;
		src++;
		ret++;
	}
	*ret = '\0';
	return (dest);
}
