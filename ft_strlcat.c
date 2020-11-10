/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:41:15 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/02 23:41:27 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dstlen;
	size_t		i;
	char		*ptrd;
	char const	*ptrs;

	ptrd = dst;
	ptrs = src;
	i = dstsize;
	while (i-- > 0 && *ptrd != '\0')
		ptrd++;
	dstlen = ptrd - dst;
	i = dstsize - dstlen;
	if (i == 0)
		return (dstlen + ft_strlen(src));
	while (*ptrs != '\0')
	{
		if (i != 1)
		{
			*ptrd++ = *ptrs;
			i--;
		}
		ptrs++;
	}
	*ptrd = '\0';
	return (dstlen + (ptrs - src));
}
