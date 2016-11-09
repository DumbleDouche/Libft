/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:51:58 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 04:04:57 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char	*ret;

	if (!dest || !src)
		return ((void *)0);
	ret = dest;
	while (*src && *dest)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}
