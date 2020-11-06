/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:49:52 by bscamand          #+#    #+#             */
/*   Updated: 2020/10/29 15:49:54 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	n_len = ft_strlen(needle);
	if (*needle == '\0')
		return (char *)haystack;
	while (*haystack != '\0' && len-- >= n_len)
	{
		if (*haystack == *needle && (ft_memcmp(haystack, needle, n_len) == 0))
			return (char *)haystack;
		haystack++;
	}
	return (NULL);
}
