/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 00:31:41 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/21 04:35:17 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

static size_t		ft_countw(const char *s, char c)
{
	size_t		inwrd;
	size_t		count;
	size_t		i;

	inwrd = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (inwrd && s[i] == c)
			inwrd = 0;
		if (!inwrd && s[i] != c)
		{
			inwrd = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static size_t		ft_lenword(const char *s, char c)
{
	size_t		i;

	i = 0;
	while (*s == c && *s)
		s++;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**ret;
	size_t			i;
	size_t			index;

	if (!s)
		return (NULL);
	index = 0;
	i = 0;
	if (!(ret = (char **)malloc(sizeof(char*) * (ft_countw(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			ret[index] = ft_strsub(s, 0, ft_lenword(s, c));
			index++;
			s += (ft_lenword(s, c));
		}
		else
			s++;
	}
	ret[index] = NULL;
	return (ret);
}
