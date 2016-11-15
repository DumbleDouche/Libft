/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:32:44 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 03:19:23 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void		*ft_memalloc(size_t size)
{
	char	*ret;

	if (!size || !(ret = (void *)malloc(sizeof(ret) * (size))))
		return (NULL);
	while (size--)
		ret[size] = '\0';
	return ((void *)ret);
}
