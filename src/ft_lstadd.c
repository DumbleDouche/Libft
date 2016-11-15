/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:08:25 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/15 19:59:37 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	if (!(new) || !(alst))
		return ;
	new->next = *alst;
	*alst = new;
}
