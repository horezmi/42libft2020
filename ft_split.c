/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:08:22 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/05 18:08:23 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	substr_count(char const *s, char c)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	if (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != 0
				&& s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char		**free_malloc(char **arrstr, size_t index)
{
	size_t		i;

	i = 0;
	while (i < index)
	{
		free(arrstr[i]);
		i++;
	}
	free(arrstr);
	return (0);
}

static char		*create_malloc(char **arrstr, size_t index, size_t n)
{
	arrstr[index] = (char *)malloc(sizeof(char) * (n));
	if (!arrstr[index])
		return (*free_malloc(arrstr, index));
	return (arrstr[index]);
}

char			**ft_split(char const *s, char c)
{
	char		**arrstr;
	size_t		index;
	size_t		i;
	size_t		start;

	if (!s || !(arrstr = (char **)malloc(sizeof(char *) *
		(substr_count(s, c) + 1))))
		return (0);
	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			create_malloc(arrstr, index, i - start + 1);
			ft_strlcpy(arrstr[index++], &s[start], i - start + 1);
		}
		else
			i++;
	}
	arrstr[index] = 0;
	return (arrstr);
}
