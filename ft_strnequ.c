/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 00:36:44 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/10 18:32:22 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	if ((!(*s2)) || !n)
		return (1);
	return (0);
}
