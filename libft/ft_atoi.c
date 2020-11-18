/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:07:33 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/01 18:14:21 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_spaces(int s)
{
	if ((s == '\t' || s == '\n' || s == '\v' || s == '\r'
			|| s == '\f' || s == ' '))
		return (1);
	return (0);
}

int	ft_porm(int c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *nptr)
{
	size_t				i;
	int					pm;
	unsigned int		fin;

	i = 0;
	fin = 0;
	pm = 1;
	while (ft_spaces(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		pm = ft_porm(nptr[i]);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		fin = fin * 10 + nptr[i] - '0';
		i++;
	}
	return (fin * pm);
}
