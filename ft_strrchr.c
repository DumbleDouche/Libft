/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 22:56:58 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/10 21:19:57 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	last;

	i = 0;
	last = 0;
	if (!str)
		return (NULL);
	if (!(*str))
		return ((void *)0);
	if (*str == (unsigned char)c)
		last = 0;
	while (str[i])
	{
		i++;
		if (str[i] == (unsigned char)c)
			last = i;
	}
	if (last)
		return ((char *)(str + last));
	return (NULL);
}
