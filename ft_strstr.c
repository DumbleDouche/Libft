/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:54:02 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/12 20:41:48 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		s1len;
	size_t		s2len;

	if (!*s2)
		return ((char *)s1);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	while (*s1 && s1len >= s2len)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, s2len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
