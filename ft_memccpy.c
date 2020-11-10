/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:43:48 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/01 17:43:50 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*ptrd;
	unsigned char		*ptrs;

	ptrd = (unsigned char *)dst;
	ptrs = (unsigned char *)src;
	while (n--)
	{
		if (*ptrs == (unsigned char)c)
		{
			*ptrd = (unsigned char)c;
			return (ptrd + 1);
		}
		*ptrd = *ptrs;
		ptrd++;
		ptrs++;
	}
	if (*ptrs != (unsigned char)c)
		return (NULL);
	return (dst);
}
