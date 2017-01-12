/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 21:35:00 by rchoquer          #+#    #+#             */
/*   Updated: 2017/01/12 01:57:28 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*parse;
	t_list		*ret;
	t_list		*temp;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	if (!(parse = ft_lstnew((temp->content), temp->content_size)))
		return (NULL);
	ret = parse;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		if (!(parse->next = ft_lstnew(temp->content, temp->content_size)))
			return (NULL);
		parse = parse->next;
		lst = lst->next;
	}
	return (ret);
}
