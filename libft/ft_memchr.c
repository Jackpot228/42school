/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:09:06 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/01 18:12:57 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *news;
	unsigned char newc;

	news = (unsigned char *)s;
	newc = (unsigned char)c;
	while (n--)
	{
		if (*(news++) == newc)
			return (--news);
	}
	return (NULL);
}
