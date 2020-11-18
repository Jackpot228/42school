/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:10:26 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/07 13:07:41 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*mem;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(mem = (char*)malloc(sizeof(*mem) * (len1 + len2 + 1))))
		return (NULL);
	i = 0;
	while (*s1)
		mem[i++] = *(s1++);
	while (*s2)
		mem[i++] = *(s2++);
	mem[i] = '\0';
	return (mem);
}
