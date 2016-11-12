/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 00:26:26 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/12 20:50:40 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	char	*ret;

	ret = (char *)str;
	while (*ret && *ret != (unsigned char)c)
		ret++;
	if (*ret == (unsigned char)c)
		return (ret);
	return (NULL);
}
