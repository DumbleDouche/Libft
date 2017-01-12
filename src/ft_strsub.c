/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 00:40:19 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/12 01:57:28 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*ret;

	i = 0;
	ret = NULL;
	if (!s || len > (ft_strlen(s) - start))
		return (NULL);
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (start--)
		s++;
	while (len--)
	{
		ret[i] = *s;
		i++;
		s++;
	}
	ret[i] = '\0';
	return (ret);
}
