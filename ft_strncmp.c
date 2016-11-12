/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:12:21 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/12 18:09:21 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (!n)
		return (0);
	while (*str1 && *str2 && *str1 == *str2 && n--)
	{
		if ((*str1 == '\0') || (*str2 == '\0') || !n)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		++str1;
		++str2;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
