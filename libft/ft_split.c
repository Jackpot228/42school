/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoralee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:23:06 by acoralee          #+#    #+#             */
/*   Updated: 2020/11/11 13:36:13 by acoralee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_stralloc(char const *s, char c, int n, char **mem)
{
	int		i;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			i--;
		}
		else if (s[i] != c)
		{
			n++;
			while (s[i] != c && s[i])
				i++;
			i--;
		}
		i++;
	}
	if (!(mem = malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	mem[n] = 0;
	return (mem);
}

char	**ft_memfree(char **mem, int z)
{
	while (z)
	{
		free(mem[z]);
		z--;
	}
	free(mem);
	return (NULL);
}

char	**ft_splitfull(char const *s, char c, int n, char **mem)
{
	int		i;
	int		j;
	int		z;

	i = 0;
	z = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		n = 0;
		if (!s[i])
			break ;
		while (s[i] != c && s[i] && ++i)
			n++;
		if (!(mem[z] = malloc(sizeof(char) * (n + 1))))
			return (ft_memfree(mem, z));
		j = 0;
		while (--n > -1)
			mem[z][j++] = s[i - (n + 1)];
		mem[z++][j] = '\0';
	}
	return (mem);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;
	int		n;
	int		z;

	mem = 0;
	if (!s)
		return (NULL);
	n = 0;
	if (!(mem = ft_stralloc(s, c, n, mem)))
		return (NULL);
	n = 0;
	z = 0;
	return (ft_splitfull(s, c, n, mem));
}
