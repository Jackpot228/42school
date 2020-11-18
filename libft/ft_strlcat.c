/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:34:52 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/04 14:06:26 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t j;
	size_t srclen;

	dstlen = ft_strlen(dst);
	j = 0;
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		srclen += dstsize;
	else
		srclen += dstlen;
	while (src[j] && (dstlen + 1) < dstsize)
		dst[dstlen++] = src[j++];
	dst[dstlen] = '\0';
	return (srclen);
}
