/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:09:29 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/12 01:57:28 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char		*s1;
	char		*ret;

	ret = NULL;
	s1 = NULL;
	if (!s || !f || !(s1 = ft_strdup(s)))
		return (NULL);
	s1 = ft_strdup(s);
	ret = s1;
	while (*s1)
	{
		*s1 = f(*s1);
		s1++;
	}
	return (ret);
}
