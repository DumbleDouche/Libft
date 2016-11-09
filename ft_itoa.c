/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:48:02 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 04:18:37 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_digits(long nbr)
{
	size_t	digits;

	digits = 0;
	if (nbr == 0)
		return (0);
	while (nbr /= 10)
		digits++;
	return (digits);
}

char			*ft_itoa(int n)
{
	long	v;
	char	*ret;

	v = n;
	ret = NULL;
	if (!(ret = (char *)malloc(((ft_digits(v) + (n < 0)) + 2))))
		return (NULL);
	*(ret + ft_digits(v) + (n < 0) + 1) = '\0';
	if (v < 0)
	{
		*ret = '-';
		v *= -1;
	}
	if (v == 0)
		*ret = '0';
	while (v)
	{
		*(ret + ft_digits(v) + (n < 0)) = (v % 10 + '0');
		v /= 10;
	}
	return (ret);
}
