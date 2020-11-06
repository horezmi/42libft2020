/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:48:14 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/01 19:48:16 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstn;
	unsigned char	*srcn;

	if (!dst && !src)
		return (0);
	dstn = (unsigned char *)dst;
	srcn = (unsigned char *)src;
	if (*dstn < *srcn)
	{
		while (len--)
			*dstn++ = *srcn++;
	}
	else
	{
		dstn = &dstn[len - 1];
		srcn = &srcn[len - 1];
		while (len--)
			*dstn-- = *srcn--;
	}
	return (dst);
}
