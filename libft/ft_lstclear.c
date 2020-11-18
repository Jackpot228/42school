/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:08:47 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/08 15:13:58 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *buf;
	t_list *swap;

	if (!lst || !del)
		return ;
	buf = *lst;
	while (buf)
	{
		del(buf->content);
		swap = buf;
		buf = buf->next;
		free(swap);
	}
	*lst = NULL;
}
