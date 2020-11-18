/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:19:56 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/01 18:13:53 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *newdst;
	unsigned char *newsrc;

	newdst = (unsigned char *)dst;
	newsrc = (unsigned char *)src;
	if (dst == src)
		return (dst);
	else if (dst < src)
	{
		while (len--)
			*(newdst++) = *(newsrc++);
	}
	else
	{
		while (len--)
			newdst[len] = newsrc[len];
	}
	return (dst);
}
