/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:29:14 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/15 19:59:28 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		start;
	size_t		len;

	start = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && (s[i] == '\t' || s[i] == '\n' || s[i] == ' '))
		i++;
	if (!s[i])
		return (ft_strdup(""));
	start = i;
	while (s[i])
		i++;
	len = i - start;
	while (s[--i] == '\t' || s[i] == '\n' || s[i] == ' ')
		len--;
	return (ft_strsub(s, start, len));
}
