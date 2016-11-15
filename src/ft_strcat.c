/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:50:59 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/15 19:59:52 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char		*ret;
	const char	*srcp;

	ret = dest;
	srcp = src;
	while (*ret)
		ret++;
	while (*srcp)
	{
		*ret = *srcp;
		srcp++;
		ret++;
	}
	*ret = '\0';
	return (dest);
}
