/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:24:40 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/10 20:34:33 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1 || !(*s1) || !s2)
		return ((void*)0);
	if (s1 == s2 || !(*s2))
		return ((char *)s1);
	if (n < ft_strlen(s2))
		return ((void *)0);
	while (s1[i] && (s1 + i) >= (s2 + i) && i < n)
	{
		while (s1[i + j] && s2[j] && s1[i + j] == s2[j] && j + i < n)
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		j = 0;
		i++;
	}
	return ((void*)0);
}
