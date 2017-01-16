/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:48:02 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/16 02:38:03 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char			*ft_itoa(int n)
{
	long	v;
	char	*ret;

	v = n;
	ret = NULL;
	if (!(ret = (char *)malloc(((ft_digits(v)) + 1))))
		return (NULL);
	*(ret + ft_digits(v)) = '\0';
	if (v < 0)
	{
		*ret = '-';
		v = ABS(v);
	}
	if (v == 0)
		*ret = '0';
	while (v)
	{
		*(ret + ft_digits(v) + (n < 0) - 1) = (v % 10 + '0');
		v /= 10;
	}
	return (ret);
}
