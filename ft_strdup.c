/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:28:21 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/02 23:28:22 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*s1n;

	i = 0;
	s1n = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s1n)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s1n[i] = s1[i];
		i++;
	}
	s1n[i] = '\0';
	return (s1n);
}
