/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:29:42 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/12 01:57:28 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	size;

	size = 0;
	if (s && f)
	{
		size = ft_strlen(s);
		while (size--)
			f(size, (s + size));
	}
}
