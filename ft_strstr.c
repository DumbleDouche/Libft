/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:54:02 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 04:01:21 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	if (s1 == s2 || !*s2)
		return ((char *)s1);
	while (s1[i])
	{
		while (s1[i + j] == s2[j] && s1[i + j] && s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		j = 0;
		i++;
	}
	return (NULL);
}
