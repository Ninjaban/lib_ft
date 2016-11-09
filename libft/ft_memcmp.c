/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:18:26 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/09 10:55:55 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	while (n-- > 0)
	{
		str1 = (unsigned char *)s1;
		str2 = (unsigned char *)s2;
		if (*str1 != *str2)
			return (*str1 - *str2);
		s1++;
		s2++;
	}
	return (0);
}