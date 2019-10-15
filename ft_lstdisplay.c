/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplay.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiyoke <oiyoke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:51:54 by oiyoke            #+#    #+#             */
/*   Updated: 2019/10/14 16:52:34 by oiyoke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdisplay(t_list *begin)
{
	if (!begin)
		ft_putstr("null");
	else
	{
		while (begin)
		{
			ft_putstr((char*)begin->content);
			ft_putchar(' ');
			ft_putnbr((int)begin->content_size);
			ft_putchar('\n');
			begin = begin->next;
		}
	}
}
