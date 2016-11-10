/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:31:30 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/09 21:55:38 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp);
		temp = temp->next;
	}
}