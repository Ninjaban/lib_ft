/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:43:48 by jcarra            #+#    #+#             */
/*   Updated: 2016/11/03 16:44:12 by jcarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long int		ft_revnbr(unsigned long int nbr)
{
	unsigned long int	rev;

	rev = 1;
	while (nbr > 0)
	{
		rev = rev * 10 + (nbr % 10);
		nbr = nbr / 10;
	}
	return (rev);
}
