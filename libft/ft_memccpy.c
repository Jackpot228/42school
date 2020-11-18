/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:45:14 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/01 18:14:47 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dd;
	unsigned char *ss;

	dd = (unsigned char*)dst;
	ss = (unsigned char*)src;
	while (n--)
		if ((*(dd++) = *(ss++)) == (unsigned char)c)
			return (dd);
	return (NULL);
}
