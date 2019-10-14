/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiyoke <oiyoke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 17:50:56 by oiyoke            #+#    #+#             */
/*   Updated: 2019/10/04 18:18:34 by oiyoke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	if (!(new_list = (t_list *)(malloc(sizeof(t_list)))))
		return (NULL);
	if (!(content))
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		if (!(new_list->content = (void *)(malloc(content_size))))
			return (NULL);
		ft_memcpy(new_list->content, content, content_size);
		new_list->content_size = content_size;
	}
	new_list->next = NULL;
	return (new_list);
}
