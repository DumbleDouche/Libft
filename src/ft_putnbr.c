/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:17:54 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/12 01:57:28 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	ret;

	ret = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		ret *= -1;
	}
	if (ret >= 10)
	{
		ft_putnbr(ret / 10);
		ft_putnbr(ret % 10);
	}
	else
		ft_putchar(ret + '0');
}
