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

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstn;
	unsigned char	*srcn;
	size_t			i;

	if (dst == src)
		return (dst);
	dstn = (unsigned char *)dst;
	srcn = (unsigned char *)src;
	if (dst > src)
	{
		i = len;
		while (i-- > 0)
			dstn[i] = srcn[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dstn[i] = srcn[i];
			i++;
		}
	}
	return (dstn);
}
