/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 01:44:25 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/19 01:49:54 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnstr(const char *string, size_t size)
{
	size_t	i;

	i = 0;
	while (size--)
	{
		write(1, &string[i], 1);
		i++;
	}
}
