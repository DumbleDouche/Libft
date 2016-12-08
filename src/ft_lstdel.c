/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:36:36 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/15 19:59:37 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*temp;

	if (!alst || !del)
		return ;
	temp = *alst;
	while (temp)
	{
		(*alst) = (*alst)->next;
		del(temp->content, temp->content_size);
		free(temp);
		temp = *alst;
	}
	*alst = NULL;
}
