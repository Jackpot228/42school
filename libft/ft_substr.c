/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:21:44 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/07 13:05:44 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*mem;

	i = 0;
	if (!s)
		return (NULL);
	if (!(mem = (char*)malloc(sizeof(*mem) * (len + 1))))
		return (NULL);
	while (s && i < len)
	{
		mem[i] = s[i + start];
		i++;
	}
	mem[i] = '\0';
	if (ft_strlen(s) < start)
		mem[0] = '\0';
	return (mem);
}
