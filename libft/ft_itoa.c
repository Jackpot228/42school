/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:21:22 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/15 18:33:08 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long n)
{
	size_t len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t	len;
	long	num;
	char	*mem;

	num = n;
	len = ft_len(n);
	if (!(mem = malloc(len + 1)))
		return (NULL);
	mem[len] = '\0';
	if (num < 0)
	{
		mem[0] = '-';
		num = -num;
	}
	else if (num == 0)
	{
		mem[0] = '0';
	}
	while (num > 0)
	{
		mem[--len] = '0' + num % 10;
		num /= 10;
	}
	return (mem);
}
