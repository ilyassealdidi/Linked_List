/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:38:51 by ialdidi           #+#    #+#             */
/*   Updated: 2024/04/29 13:00:09 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lst_addback(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = lst_last(*lst);
		last->next = new;
		new->previous = last;
	}
}
