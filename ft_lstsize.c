/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:42:18 by bscamand          #+#    #+#             */
/*   Updated: 2020/12/01 11:42:20 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *lst)
{
	size_t	n;
	t_list	*ptr;

	n = 0;
	if (!lst)
		return (0);
	ptr = lst;
	while (ptr)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
