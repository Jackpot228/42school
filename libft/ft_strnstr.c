/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:09:11 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/04 14:35:39 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	const char *fc;

	if (*s2 == '\0')
		return ((char*)s1);
	fc = 0;
	while (*s1 && len--)
	{
		if (*s1 == *s2)
		{
			if (!fc)
				fc = s1;
			if (*++s2 == '\0')
				return ((char*)fc);
		}
		else if (fc)
		{
			s2 -= s1 - fc;
			len += s1 - fc;
			s1 = fc;
			fc = 0;
		}
		s1++;
	}
	return (NULL);
}
