/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:28:31 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/21 04:35:17 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*ret;

	if (!(ret = (char *)malloc((size + 1))))
		return (NULL);
	size++;
	while (size--)
		ret[size] = '\0';
	return (ret);
}
