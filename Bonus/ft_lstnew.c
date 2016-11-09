/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:47:54 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/07 08:48:05 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
    {
		new->content = NULL;
		new->content_size = 0;
    }
	else
    {
		if ((new->content = malloc(content_size)) == NULL)
		{
			free(new);
			return (NULL);
		}
		new->content = ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
    }
	new->next = NULL;
	return (new);
}
