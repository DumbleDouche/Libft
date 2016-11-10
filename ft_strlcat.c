/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:34:32 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/10 19:14:08 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	destlen;

	if (!dest || !src)
		return (0);
	i = 0;
	while (dest[i] && i < n)
		i++;
	destlen = i;
	while (src[i - destlen] && i < n - 1)
	{
		dest[i] = src[i - destlen];
		i++;
	}
	if (destlen < n)
		dest[i] = '\0';
	return (destlen + ft_strlen(src));
}
