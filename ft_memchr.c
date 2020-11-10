/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:00:40 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/02 19:00:42 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*sn;

	sn = (const unsigned char *)s;
	while (n--)
	{
		if (*sn == (unsigned char)c)
			return (void *)(sn++);
		sn++;
	}
	return (NULL);
}
