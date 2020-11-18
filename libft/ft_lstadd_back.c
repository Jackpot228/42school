/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:18:26 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/08 15:21:55 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *buf;

	if (!lst)
		return ;
	buf = *lst;
	if (!buf)
		*lst = new;
	else
	{
		while (buf->next)
			buf = buf->next;
		buf->next = new;
	}
}
