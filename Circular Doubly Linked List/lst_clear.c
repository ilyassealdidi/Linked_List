/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:38:33 by ialdidi           #+#    #+#             */
/*   Updated: 2024/04/03 00:38:42 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lst_clear(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	lst_last(lst)->next = NULL;
	while (lst)
	{
		tmp = lst->next;
		lst_delone(lst, free);
		lst = tmp;
	}
}
