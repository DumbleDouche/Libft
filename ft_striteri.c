/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:51:13 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/10 20:51:25 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	size;

	size = 0;
	if (s || f)
	{
		size = ft_strlen(s);
		while (size--)
			f(size, &s[size]);
	}
}
