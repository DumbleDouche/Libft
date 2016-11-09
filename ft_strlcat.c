/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:34:32 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 04:17:11 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	if (!dest || !src)
		return (0);
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = destlen;
	while (src[i - destlen] && i < n - 1)
	{
		dest[i] = src[i - destlen];
		i++;
	}
	dest[i] = '\0';
	return (destlen + srclen + (n - i));
}
