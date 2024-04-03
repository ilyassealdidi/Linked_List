/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_iter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:38:11 by ialdidi           #+#    #+#             */
/*   Updated: 2024/04/03 00:38:23 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lst_iter(t_list *lst, void (*f)(void *))
{
	t_list	*head;

	if (!f || !lst)
		return ;
	head = lst;
	while (1)
	{
		f(lst->content);
		if (lst->next == head)
			break ;
	}
}
