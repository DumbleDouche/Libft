/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:24:40 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/12 20:45:31 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		s2len;

	if (!*s2)
		return ((char *)s1);
	s2len = ft_strlen(s2);
	while (*s1 && n-- >= s2len)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, s2len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
