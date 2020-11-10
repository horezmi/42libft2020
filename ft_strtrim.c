/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:37:34 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/04 12:37:36 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	s1len;
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1len = ft_strlen(s1);
	while (s1len && ft_strchr(set, s1[s1len]))
		s1len--;
	ptr = (char *)malloc(sizeof(char) * (s1len + 2));
	if (!ptr)
		return (NULL);
	while (i <= s1len)
	{
		ptr[i] = *s1;
		i++;
		s1++;
	}
	ptr[i] = '\0';
	return (ptr);
}
