/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:04:07 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/09 11:12:52 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *str, const void *srcs,
									int c, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src;
	size_t				i;

	dst = str;
	src = srcs;
	i = 0;
	while (n--)
	{
		*dst = *src;
		if (*src == (unsigned char)c)
			return ((void *)dst + 1);
		dst++;
		src++;
	}
	return (NULL);
}
