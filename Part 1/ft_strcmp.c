/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:52:51 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/04 15:52:07 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] && s2[n])
		n = n + 1;
	return ((unsigned char)s1[n] - (unsigned char)s2[n]);
}
