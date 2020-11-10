/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:28:17 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/02 19:28:18 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;

	if (!dst || !src)
		return (0);
	srclen = ft_strlen(src);
	if ((srclen + 1) < dstsize)
		dst = ft_memcpy(dst, src, srclen + 1);
	else if (dstsize != 0)
	{
		dst = ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}
