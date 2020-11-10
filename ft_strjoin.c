/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:35:35 by bscamand          #+#    #+#             */
/*   Updated: 2020/11/03 21:35:37 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*cated;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	cated = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!cated)
		return (NULL);
	while (*s1 != '\0')
	{
		cated[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		cated[i] = *s2;
		s2++;
		i++;
	}
	cated[i] = '\0';
	return (cated);
}
