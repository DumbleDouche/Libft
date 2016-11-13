/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:12:21 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/13 18:21:58 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*s1c;
	const char	*s2c;

	s1c = s1;
	s2c = s2;
	if (!n)
		return (0);
	while (*s1c && *s2c && *s1c == *s2c && n--)
	{
		if ((*s1c == '\0') || (*s2c == '\0') || !n)
			return ((unsigned char)*s1c - (unsigned char)*s2c);
		++s1c;
		++s2c;
	}
	return ((unsigned char)*s1c - (unsigned char)*s2c);
}
