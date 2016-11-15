/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:03:05 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/15 20:00:00 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char		*ret;
	const char	*srcp;

	ret = dest;
	srcp = src;
	while (*ret)
		ret++;
	while (*srcp && n--)
	{
		*ret = *srcp;
		srcp++;
		ret++;
	}
	*ret = '\0';
	return (dest);
}
