/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:35:17 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/04 16:42:54 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long long nbr, int signlen)
{
	int			intlen;

	intlen = 1;
	while (nbr /= 10)
		intlen++;
	return (intlen + signlen);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			sign;
	int			intlen;
	long long	nbr;

	sign = (n < 0) ? 1 : 0;
	nbr = (n < 0) ? -(long long)n : (long long)n;
	intlen = ft_intlen(nbr, sign);
	str = (char *)malloc(sizeof(char) * (intlen + 1));
	if (!str)
		return (NULL);
	str[intlen--] = '\0';
	while (intlen >= sign)
	{
		str[intlen--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
