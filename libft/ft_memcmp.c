/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:06:03 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/01 14:37:53 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *news1;
	unsigned char *news2;

	news1 = (unsigned char *)s1;
	news2 = (unsigned char *)s2;
	while (n--)
	{
		if (*(news1++) != *(news2++))
			return (*(--news1) - *(--news2));
	}
	return (0);
}
