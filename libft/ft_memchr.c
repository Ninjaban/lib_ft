/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:02:40 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/09 10:48:35 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*dst;

	dst = str;
	if (n != 0)
	{
		while (n != 0)
		{
			if (*dst++ == (unsigned char)c)
				return ((void *)(dst - 1));
			n = n - 1;
		}
	}
	return (NULL);
}
