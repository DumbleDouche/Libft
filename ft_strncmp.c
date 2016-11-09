/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:12:21 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 03:11:01 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (!str1 || !str2)
		return (0);
	while (*str1 && *str2 && *str1 == *str2 && n--)
	{
		++str1;
		++str2;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
