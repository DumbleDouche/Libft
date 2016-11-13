/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:51:26 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/13 18:22:03 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	const char	*s1c;
	const char	*s2c;

	s1c = s1;
	s2c = s2;
	while (*s1c && *s2c && *s1c == *s2c)
	{
		++s1c;
		++s2c;
	}
	return ((unsigned char)*s1c - (unsigned char)*s2c);
}
