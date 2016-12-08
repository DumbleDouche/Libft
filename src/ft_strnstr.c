/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:24:40 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/13 18:22:09 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		s2len;
	const char	*s1c;
	const char	*s2c;

	s1c = s1;
	s2c = s2;
	if (!*s2c)
		return ((char *)s1c);
	s2len = ft_strlen(s2c);
	while (*s1c && n-- >= s2len)
	{
		if (*s1c == *s2c && ft_memcmp(s1c, s2c, s2len) == 0)
			return ((char *)s1c);
		s1c++;
	}
	return (NULL);
}
