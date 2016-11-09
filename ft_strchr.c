/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 00:26:26 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 02:55:00 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str++)
		if (*str == (unsigned char)c)
			return ((char *)str);
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
