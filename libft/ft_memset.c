/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:04:13 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/01 11:51:30 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *replace;

	replace = (unsigned char *)s;
	while (n > 0)
	{
		*replace = (unsigned char)c;
		replace++;
		n--;
	}
	return (s);
}
