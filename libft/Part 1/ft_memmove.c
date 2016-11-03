/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:09:42 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/03 14:47:28 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*srcs;
	unsigned char		*dst;
	size_t				i;

	i = 0;
	srcs = src;
	dst = dest;
	while (i < n)
	{
		dst[i] = srcs[i];
		i = i + 1;
	}
	return ((void *)dst);
}
