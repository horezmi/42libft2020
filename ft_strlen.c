/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:18:11 by bscamand          #+#    #+#             */
/*   Updated: 2020/10/29 12:18:12 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

size_t	ft_strlen(const char *s)
{
	size_t n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
