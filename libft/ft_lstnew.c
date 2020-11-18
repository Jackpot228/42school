/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:27:20 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/08 13:59:38 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *mem;

	if (!(mem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	mem->content = content;
	mem->next = NULL;
	return (mem);
}
