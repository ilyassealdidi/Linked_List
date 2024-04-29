/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addfront.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:39:05 by ialdidi           #+#    #+#             */
/*   Updated: 2024/04/29 13:00:11 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lst_addfront(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst)
	{
		new->next = *lst;
		(*lst)->previous = new;
	}
	*lst = new;
}
