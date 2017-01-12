/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:40:38 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/12 01:57:28 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	ret;

	ret = nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ret *= -1;
	}
	if (ret >= 10)
	{
		ft_putnbr_fd(ret / 10, fd);
		ft_putnbr_fd(ret % 10, fd);
	}
	else
		ft_putchar_fd(ret + '0', fd);
}
