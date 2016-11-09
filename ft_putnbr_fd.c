/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:40:38 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 02:51:11 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	lol;

	lol = nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		lol *= -1;
	}
	if (lol >= 10)
	{
		ft_putnbr_fd(lol / 10, fd);
		ft_putnbr_fd(lol % 10, fd);
	}
	else
		ft_putchar_fd(lol + '0', fd);
}
