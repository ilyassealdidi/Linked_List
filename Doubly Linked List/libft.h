/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:34:51 by ialdidi           #+#    #+#             */
/*   Updated: 2024/04/29 13:02:17 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef struct s_list
{
	void	*content;
	t_list	*previous;
	t_list	*next;
}	t_list;

t_list	*lst_last(t_list *lst);
t_list	*lst_new(void *content);
int		lst_size(t_list *lst);
void	lst_addback(t_list **lst, t_list *new);
void	lst_addfront(t_list **lst, t_list *new);
void	lst_delone(t_list *lst, void (*del)(void *));
void	lst_clear(t_list **lst, void (*del)(void *));
void	lst_iter(t_list *lst, void (*f)(void *));

#endif
 
