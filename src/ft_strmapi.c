/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:19:59 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/12 01:57:28 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*s1;
	unsigned int		i;

	s1 = NULL;
	i = 0;
	if (!s || !f || !(s1 = ft_strdup(s)))
		return (NULL);
	s1 = ft_strdup(s);
	while (s1[i])
	{
		s1[i] = f(i, s1[i]);
		i++;
	}
	return (s1);
}
