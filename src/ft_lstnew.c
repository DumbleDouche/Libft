/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquer <rchoquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:01:12 by rchoquer          #+#    #+#             */
/*   Updated: 2016/11/15 19:59:42 by rchoquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*ret;

	if (!(ret = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		ret->content = NULL;
		ret->content_size = 0;
		ret->next = NULL;
	}
	else
	{
		ret->content = (void *)malloc(sizeof(*content) * content_size);
		if ((ret->content))
		{
			ret->content_size = content_size;
			ft_memcpy((ret->content), content, content_size);
			ret->next = NULL;
		}
		else
			free(ret);
	}
	return (ret);
}
