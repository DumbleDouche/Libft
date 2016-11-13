/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:07:17 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/13 18:21:52 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(const char *str)
{
	long		res;
	int			sign;
	char		*strc;

	strc = (char *)str;
	sign = 1;
	res = 0;
	while (*strc == '\t' || *strc == '\n' || *strc == '\r'
	|| *strc == '\v' || *strc == '\f' || *strc == ' ')
	{
		strc++;
	}
	if (*strc == '-' || *strc == '+')
	{
		if (*strc == '-')
			sign = -1;
		strc++;
	}
	while (*strc >= '0' && *strc <= '9')
	{
		res = res * 10 + (int)(*strc - 48);
		strc++;
	}
	return (res * sign);
}
