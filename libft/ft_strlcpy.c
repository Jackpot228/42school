/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:02:59 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/04 12:34:08 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;

	if (!dst || !src)
		return (0);
	len = 0;
	while (++len < size && *src)
		*(dst++) = *(src++);
	if (size)
		*dst = '\0';
	while (*(src++))
		len++;
	return (len - 1);
}
