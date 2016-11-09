/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:47:29 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/07 09:04:05 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list (*f)(t_list *elem))
{
	t_list	*start;
	t_list	*new;
	t_list	tmp;

	if (lst == NULL)
		return (NULL);
	tmp = f(lst);
	start = &tmp;
	lst = lst->next;
	if (lst == NULL)
		return (start);
	tmp = f(lst);
	start->next = &tmp;
	new = start->next;
	lst = lst->next;
	while (lst != NULL)
    {
		tmp = f(lst);
		new->next = &tmp;
		new = new->next;
		lst = lst->next;
    }
	return (start);
}
