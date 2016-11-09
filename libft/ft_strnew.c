/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:59:41 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/09 10:17:56 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;
	size_t	n;

	n = 0;
	if ((str = malloc(size + 1)) == NULL)
		return (NULL);
	while (n <= size)
		str[n++] = '\0';
	return (str);
}
