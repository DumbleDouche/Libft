/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:17:54 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 02:48:27 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	lol;

	lol = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		lol *= -1;
	}
	if (lol >= 10)
	{
		ft_putnbr(lol / 10);
		ft_putnbr(lol % 10);
	}
	else
		ft_putchar(lol + '0');
}
