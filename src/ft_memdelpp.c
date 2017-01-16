/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdelpp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 03:05:42 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/16 22:08:04 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

void			ft_memdelpp(void ***pp)
{
	int		i;

	i = -1;
	while ((*pp)[++i])
		ft_memdel(&((*pp)[i]));
	free(*pp);
	*pp = 0;
}
